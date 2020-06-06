//A person departs from point 0. He want to visit points 1,2,…,n, once and come back to 0. 
//Given c(i,j) which is the traveling distance from point i to point j(i,j=0,1,…,n), 
//help that person to compute the shortest route.
//
//Input
//Line 1 contains n(1=n=15) Line i+1(i=1,2,…,n+1) contains the ith line of the matrix c
//Output
//Unique line contains the length of the shortest route
//
//Example
//input
//3
//0 5 10 10
//6 0 2 9
//5 9 0 6
//1 7 4 0
//output
//14



#include<iostream>
 
using namespace std;
 
#define V 16
#define MAX 999999

//tsp using quy hoach dong tren bit-mask
 
double tsp(double arr[][V], int dp[][V],int n, int visited_all, int mask, int pos)
{
	if (mask == visited_all){
		return arr[pos][0];
	}
	if (dp[mask][pos] != -1){
		return dp[mask][pos];
	}
	
	double ans = MAX;
	
	for (int city =0; city < n; city++){
		if((mask & (1<<city))== 0){
			double newAns = arr[pos][city] + tsp(arr, dp, n, visited_all, mask|(1<<city), city);
			ans = min(ans, newAns);
		}
	}
	return dp[mask][pos] = ans;
}
 
int main()
{
    int n = 0;
    cin >>n;
    double arr[n+1][V];
    for (int i = 0; i < n+1; i++){
    	for (int j = 0; j<n+1; j++){
    		cin >> arr[i][j];
		}
	}
	int VISITED_ALL = (1<<(n+1))-1;
	
	int dp [1<<(n+1)][V];
	
	for (int i = 0; i<(1<<(n+1)); i++){
		for (int j = 0; j<n+1; j++){
			dp[i][j] = -1;
		}
	}
	
	double result = tsp(arr, dp, n+1, VISITED_ALL, 1, 0);
	cout<<result<<endl;
}
