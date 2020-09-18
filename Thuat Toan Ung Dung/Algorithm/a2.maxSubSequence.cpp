//Cho m?ng s=(a1,...,an)
//
//M?t do?n s(i,j)=(ai,...,aj),1=i=j=n
//
//Tr?ng s? w(i,j)=ai+ai+1...+aj
//
//H�y t�m m?t do?n trong m?ng c� tr?ng s? l?n nh?t, nghia l� t?ng c�c s? trong do?n l� l?n nh?t.
//
//Input
//D�ng th? nh?t ch?a m?t s? nguy�n n=10^6 .
//
//D�ng th? hai ch?a n s? nguy�n.
//
//Output
//Ghi ra duy nh?t m?t s? nguy�n l� tr?ng s? l?n nh?t t�m du?c.
//
//Example
//input
//6
//-2 11 -4 13 -5 2
//output
//20



#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n = 0;
	cin>>n;
	
	// khoi tao mang arr[n]
	int arr[n];
	for (int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	// maxSum la gia tri tong toi da cua chuoi con dc tim thay tai thoi diem <= i
	// maxEnd : vvi tri ma chuoi con ket thuc
	int maxSum = arr[0];
	int maxEnd = arr[0];
	for (int i = 1; i<n; i++)
	{
		int u = arr[i];
		int v = arr[i] + maxEnd;
		if (u > v){
			maxEnd = u;
		}
		else
			maxEnd = v;
		if(maxEnd > maxSum)
		{
			maxSum = maxEnd;
		}
	}
	cout<<maxSum<<endl;
}
