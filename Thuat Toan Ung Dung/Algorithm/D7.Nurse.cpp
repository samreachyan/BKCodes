//The director of a hospital want to schedule a working plan for a nurse in a given period of N 
//consecutive days 1,..., N. Due to the policy of the hospital, each nurse cannot work all the days 1,..., N. 
//Instead, there must be days off in which the nurse need to take a rest. 
//A working plan is a sequence of disjoint working periods. 
//A working period of a nurse is defined to be a sequence of consecutive days on which the nurse must work 
//and the length of the working period is the number of consecutive days of that working period. 
//The hospital imposes two constraints:
//
//Each nurse can take a rest only one day between two consecutive working periods. 
//it means that if the nurse takes a rest today, then she has to work tomorrow (1)
//The length of each working period must be greater or equal to K1 and less than or equal to K2 (2)
//The director of the hospital want to know how many possible working plans satisfying above constraint?
//Input
//The input consists of one line which contains 3 positive integers N,K1,K2(N=1000,K1<K2=400)
//Output
//The output consists of only one single integer M modulo 10^9+7 where M is the total working plans satisfying the above constraints.
//
//Example
//input
//6 2 3
//output
//4

#include<bits/stdc++.h>
 
using namespace std;
 
int n, k1, k2;
int P = 1e9 + 7;
 
unsigned long long M[401];
 
unsigned long long giaithua(int k)
{
	if(k == 0 || k == 1){
		M[k] = 1;
		return 1;
	}
	M[k] = k * giaithua(k - 1);
	if(M[k] >= P){
		M[k] = M[k] % P;
	}
	return M[k];
}
 
 // Ham tinh tong so cach
int totalPlans()
{
	int i,j;
	
	// Khoi tao ham dp voi dp[i] la so cach lap ke hoach tinh den thoi diem i
	int dp[n + 2];
	memset(dp,  0, sizeof(dp));
	
	//case 1: dp[1] = 1 : ngay dau tien la ngay lam viec
	// case 2: dp[1]=0 : ngay dau tien la ngay nghi
	dp[1] = 1;
	
	for(i = 2 + k1; i <= n+1; i++)
	{
		for(j = i - k2 - 1; j <= i - k1 -1; j++)
		{
			if(j >= 0)
				dp[i] = dp[i] + dp[j];
		}
	}
	int count1 = dp[n] + dp[n+1];
	
	memset(dp,  0, sizeof(dp));
	
	//case 2:
	for(i = k1 + 1; i <= k2+1; i++)
		dp[i] = 1;
	for(i = k1 + 2; i <= n + 1 ; i++)
	{
		for(j = i - k2 - 1; j <= i - k1 - 1; j++)
		{
			if(j >= 0)
				dp[i] = dp[i] + dp[j];
		}
	}
	int count2 = dp[n] + dp[n+1];
	
	// Ket qua la tong cua 2 truong hop tren
	return (count1 + count2) ;
}
int main()
{
	cin >> n >> k1 >> k2;
	int i,j;
	
	int k = k2-k1 + 1;
	
	int countOfSol = totalPlans();
	cout << countOfSol;
	return 0;
}
