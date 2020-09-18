//Cho 1 m?t chu?i t? h?p C d? d�i m v?i c�c th�nh ph?n n?m trong t?p {1,2,�,n}. 
//T�m chu?i t? h?p k? ti?p c?a chu?i C trong th? t? t? di?n.
//
//Input
//D�ng d?u 2 s? nguy�n duong n,m=104.
//
//D�ng th? 2 ghi m s? nguy�n duong =n c�ch nhau b?i d?u c�ch.
//
//Output
//Ghi ra chu?i C tr�n m?t d�ng duy nh?t, c�c th�nh ph?n c�ch nhau b?i d?u c�ch. N?u kh�ng t?n t?i th� ghi ra -1.
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
