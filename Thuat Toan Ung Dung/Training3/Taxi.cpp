//input
//2
//0 8 5 1 10
//5 0 9 3 5
//6 6 0 8 2
//2 6 3 0 7
//2 5 3 4 0

//output
//17

#include<iostream>
using namespace std;
 
#define V 12
#define MAX 9999999.0
 
double TSP(double M_tsp[][V], double dp[][V],int n, int visited, int mask, int currIndex){
	if(mask == visited)
		return M_tsp[currIndex][0];
	
	if(dp[mask][currIndex] != -1)
		return dp[mask][currIndex];
	
	double ans = MAX;
		
	for(int i = 0; i< n; i++)
	{
		if((mask & (1<<i ))== 0)
		{
			double newAns = M_tsp[currIndex][i] + TSP(M_tsp, dp,n,  visited, mask|(1<<i), i);
			ans = min(ans, newAns);
		}
	}
	return dp[mask][currIndex] = ans;
	
}
 
int main()
{
	int n;
	cin>>n;
	double M[2*n+1][2*n+1];
	int i,j;
	for( i = 0; i< 2*n+1; i++)
		for( j = 0; j< 2*n +1; j++)
			cin >> M[i][j];
	
	double M_tsp[n+1][V];
	for( i = 0; i< n+1; i++)
	{
		for(j = 0; j< n+1; j++)
		{
			if(i == 0)
				M_tsp[i][j] = M[i][j];
			else{
				M_tsp[i][j] = M[i+n][j];
			}
		}
	}
		
	int visited = (1<<(n+1)) - 1;
	
	double dp[1<<(n+1)][V];
	for(i = 0; i< (1<<(n+1)); i++)
	{
		for(j = 0; j< n+1; j++)
			dp[i][j] = -1;
	}
	
	double ans = TSP(M_tsp, dp, n+1, visited, 1, 0);
	
	for(i = 1; i< n+1; i++)
	{
		ans += M[i][i+n];
	}
	cout << ans;
}
