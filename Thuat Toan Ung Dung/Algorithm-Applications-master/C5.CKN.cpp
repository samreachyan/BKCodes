//Cho hai s? nguyên duong n,k và m?t s? nguyên t? m sao cho k<n,m. Tính giá tr? Ckn mod m.
//
//Input
//Dòng d?u tiên ch?a s? test T.
//
//T dòng ti?p theo, m?i dòng ch?a ba s? nguyên n,k,m.
//
//Output
//G?m T dòng, m?i dòng ch?a m?t s? nguyên duy nh?t là k?t qu? phép toán Ckn mod m.
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
