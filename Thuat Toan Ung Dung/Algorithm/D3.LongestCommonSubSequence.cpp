//A subsequence of a given sequence s=s1,…,sn is obtained by removing some elements from s. 
//Given two sequence of integers X=(X1,…,Xn) and Y=(Y1,…,Ym). 
//Find the longest common subsequence of X and Y.
//
//Input
//Line 1 contains n and m (1=n,m=104)
//Line 2 contains X1,…,Xn
//Line 3 contains Y1,…,Ym
//Output
//Write the length of the longest subsequence of the given sequences
//
//Example
//input
//7 10
//3 7 2 5 1 4 9
//4 3 2 3 6 1 5 4 9 7
//output
//5


#include<bits/stdc++.h>
 
using namespace std;
 
int max(int a, int b)
{
	return (a>b)? a :b;
}
 
void lcs(float X[], float Y[], int n, int m, short L[][10001])
{
	//Mang L voi L[i][j] la so phan tu chung cua X va Y khi X tai vi tri i va Y tai vi tri j
	for(int i = 0; i <= n; i++){
		for(int j = 0; j <= m; j++)
		{
			// Neu i = 0 hoac j = 0 thi gan L[i][j] = 0
			if(i == 0 || j == 0)
				L[i][j] = 0;
			
			// Neu X[i-1] = Y[j-1] thi tang L[i][j] them 1
			else if(X[i - 1] == Y[j - 1]){
				L[i][j] = L[i-1][j-1] + 1;
			}
			// Con neeu khong thi gan bang max cua L[i-1][j] va L[i][j-1]
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
			
				
		}
	}
}
 
int main()
{
	int n, m;
	cin >> n >>m;
	float X[n], Y[m];
	int i, j;
	for(i = 0; i < n; i++)
		cin >> X[i];
	
	for(j = 0; j< m; j++)
		cin >> Y[j];
	
	short L[n+1][10001];
	
	lcs(X,Y,n,m, L);
	cout << L[n][m];
	
	return 0;
}
