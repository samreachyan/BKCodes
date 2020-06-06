#include <bits/stdc++.h>
using namespace std;
 
int n, k1, k2;
int P = 1e9 + 7;
 
unsigned long long M[401];
unsigned long long giaithua(int k) {
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
 
 
int totalPlans(){
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
