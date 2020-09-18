//A distribution company distribute goods to M retail outlets 1,2,…,M. 
//It has N branches 1,2,...,N. Each branch i has ai salesman. 
//The company have to assign M retail outlets to N branches: 
//each branch is responsible to distribute goods to some retail outlets, 
//each retail outlet is distributed by one branch. 
//In order to balance among salesman, the number of retail outlets assigned to each branch i must be 
//positive and divisible by ai. Compute the total number Q of ways of such assignment.
//
//Example, N = 2, M = 20, a1 = 3, a2 = 2. There are 3 ways:
//
//Branch 1 is assigned to 6 retail outlets, branch 2 is assigned to 14 retail outlets
//Branch 1 is assigned to 12 retail outlets, branch 2 is assigned to 8 retail outlets
//Branch 1 is assigned to 18 retail outlets, branch 2 is assigned to 2 retail outlets
//Input
//Line 1: N and M (1=N=100,1=M=500)
//Line 2: N positive integers a1,…,aN (1=ai=10,i=1,…,N)
//Output
//Write the value Q modulo (10^9+7)
//
//Example
//input
//2 20
//3 2
//output
//3


#include<bits/stdc++.h>
 
using namespace std;
 
 
int n, m;
int A[101];
int P = 1e9 + 7;
 
int ucln(int a, int b)
{
	if(b == 0)
		return a;
	else
		return ucln(b, a%b);
}

// Ham tim UCLN cua 1 mang 
int uclnOfArray()
{
	int a = A[1];
	for(int i = 2; i <= n; i++)
	{
		a = ucln(a, A[i]);
	}
	return a;
}
 
int countSolution()
{
	int i,j;
	int dp[m+1];	// mang dp voi dp[i] la so giai phap khi m = i
					//  ket qua se la dp[m]
	memset(dp, 0, sizeof(dp));
	
	int sumA = 0;
	for(i = 1; i <= n; i++)
	{
		sumA+=A[i];
	}
	if(sumA > m)
		return 0;
	dp[sumA] = 1;
	for(i = 1; i <= n;i++)
	{
		for(j = sumA + A[i]; j <= m; j++)
		{
			// Cong thuc quy hoach dong cho mang dp
			// Voi dp[j] = dp[j] + dp[j-A[i]]
			dp[j] = dp[j] + dp[j - A[i]];
			
			// Xet dp[j] module P
			if(dp[j] >= P){
				dp[j] = dp[j] % P;
			}
		}
	}
	return dp[m];
}
 
int main()
{
	cin >> n>> m;
	int i, j;
	for(i=1;i <= n; i++)
		cin >> A[i];
	
	int count = 0;
	int u = uclnOfArray();
	
	// Neu m khong chia het cho u thi se khong co 1 giai phap nao ca 
	if(m % u != 0)
		count =  0;
	else{
		count = countSolution();
	}
	cout << count;
	
	//cout << uclnOfArray();
	
	return 0;
}
