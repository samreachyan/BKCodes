//There are n passengers 1,2,…,n. 
//The passenger i want to travel from point i to point i+n(i=1,2,…,n). 
//There is a bus located at point 0 and has k places for transporting the passengers 
//(it means at any time, there are at most k passengers on the bus). 
//You are given the distance matrix c in which c(i,j) is the traveling distance from point i
// to point j(i,j=0,1,…,2n). Compute the shortest route for the bus, serving n passengers and 
// coming back to point 0 without visiting any point more than once (except for the point 0).
//
//Input
//Line 1 contains n and k(1=n=11,1=k=10). Line i+1(i=1,2,…,2n+1) contains the (i-1)th line of the matrix c 
//(rows and columns are indexed from 0,1,2,..,2n).
//
//Output
//Unique line contains the length of the shortest route.
//
//Example
//input
//3 2
//0 8 5 1 10 5 9
//9 0 5 6 6 2 8
//2 2 0 3 8 7 2
//5 3 4 0 3 2 7
//9 6 8 7 0 9 10
//3 8 10 6 5 0 2
//3 4 4 5 2 2 0
//output
//25


#include<iostream>
 
#define V 23
#define MAX 99999
using namespace std;
 
int cBus(int M[][V], int n, int k,int visited_all, int mask, int dp[][V], int currIndex, int count)
{
	if(mask == visited_all)
		return M[currIndex][0];
	
	if(dp[mask][currIndex] != -1)
		return dp[mask][currIndex];
	
	int ans = MAX;
	if(currIndex > 0 && currIndex<= n/2)
		count ++;
	else if (currIndex > n/2)
		count --;
	
	for(int i = 0; i< n; i++)
	{
		if(((mask & (1<<i)) == 0))
		{
			if(( i <= n/2 && count < k && count >= 0) || ((i > n/2) &&((mask & (1<< (i - n/2))) != 0)))
			{
				int newAns = M[currIndex][i] + cBus(M, n, k, visited_all, mask|(1<<i), dp, i, count);
				ans = min(ans, newAns);
			}	
		}
	}
	return dp[mask][currIndex] = ans;
}
 
int main()
{
	int n, k;
	cin >>n >>k;
	int i, j;
	int M[2*n+1][V];
	for(i = 0; i< 2*n+1; i++)
		for(j=0 ; j< 2*n +1; j++)
			cin >> M[i][j];
	
	int N = 2*n +1;
	int dp [1<<N][V];
	for(i = 0; i<(1<<N); i++)
		for(j = 0; j< N; j++)
			dp[i][j] = -1;
	
	int visited_all = (1<<N) - 1;
	
	int mask = 1;
	int currIndex = 0;
	int minPath = cBus(M, N, k, visited_all, mask, dp, currIndex, 0);
	cout << minPath;
	
	return 0;
}



