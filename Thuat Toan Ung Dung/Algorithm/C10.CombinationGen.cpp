//Cho 1 m?t chu?i t? h?p C d? dài m v?i các thành ph?n n?m trong t?p {1,2,…,n}. 
//Tìm chu?i t? h?p k? ti?p c?a chu?i C trong th? t? t? di?n.
//
//Input
//Dòng d?u 2 s? nguyên duong n,m=104.
//
//Dòng th? 2 ghi m s? nguyên duong =n cách nhau b?i d?u cách.
//
//Output
//Ghi ra chu?i C trên m?t dòng duy nh?t, các thành ph?n cách nhau b?i d?u cách. N?u không t?n t?i thì ghi ra -1.
//
//Example
//input
//5 3
//2 3 5
//output
//2 4 5 

#include<iostream>
 
using namespace std;
 
int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	int M[m];
	int i = 0;
	for(i = 0; i < m; i++)
	{
		cin >> M[i];
	}
	int count = 0;
	for(i = m-1; i>=0; i--)
	{
		if(M[i] < (n-m+i+1)){
			M[i] +=1;
			for(int j = i + 1; j < m; j++)
			{
				M[j] = M[i] + j -i;
			}
			count++;
			break;
		}
	}
	
	if(count == 0){
		int result = -1;
		cout << result;
	}
	else{
		for(i = 0; i<m;i++)
			cout << M[i] << " ";
	}
 
	return 0;
}
