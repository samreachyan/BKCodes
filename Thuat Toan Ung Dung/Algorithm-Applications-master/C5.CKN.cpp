//Cho hai s? nguy�n duong n,k v� m?t s? nguy�n t? m sao cho k<n,m. T�nh gi� tr? Ckn mod m.
//
//Input
//D�ng d?u ti�n ch?a s? test T.
//
//T d�ng ti?p theo, m?i d�ng ch?a ba s? nguy�n n,k,m.
//
//Output
//G?m T d�ng, m?i d�ng ch?a m?t s? nguy�n duy nh?t l� k?t qu? ph�p to�n Ckn mod m.
//
//Example
//input
//2
//7 3 7
//5 2 7
//output
//0
//3
//Note
//S? test T<=10
//Subtask 1 (30%) : n,k<=100.
//
//Subtask 2 (30%) : n*k<=10^5.
//
//Subtask 3 (20%) : m<=10^9+7.
//
//Subtask 4 (20%) : m,n<=10^18 , k<=10^5


#include<iostream>
#include <vector>
 
using namespace std;

// mang M voi M[i][j] la gia tri Cij 
int M[350][100000];
 
int CKN(int n, int k, int m)
{
	if(k == 0|| k == n)
		M[k][n] = 1;
	else if(M[k][n] < 0)
	{
		// Cong thuc truy hoi tinh M[k][n]
		M[k][n] = CKN(n-1, k-1, m) + CKN(n-1, k, m);
		if(M[k][n] >= m)
			M[k][n] = M[k][n] % m;
	}
	return (M[k][n] % m);
}
 
int main()
{
	int T = 0;
	cin >> T;
	int i,j;
	vector<vector<int> > V;
	for( i = 0; i < T; i++){
		vector<int> v;
		for( j = 0; j< 3; j++){
			int a;
			cin >> a;
			v.push_back(a);
		}
		V.push_back(v);
	}
	
	for(int p = 0; p< T; p++)
	{
		for( i = 0; i< 300; i++)
		{		
			for( j =0; j< 10000; j++){
				M[i][j] = -1;
			}
		}
		
		int result = CKN(V[p][0], V[p][1], V[p][2]);
		cout << result <<endl;
	}
	
	
	return 0;
}
