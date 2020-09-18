//Cho m?ng s=(a1,...,an)
//
//M?t do?n s(i,j)=(ai,...,aj),1=i=j=n
//
//Tr?ng s? w(i,j)=ai+ai+1...+aj
//
//Hãy tìm m?t do?n trong m?ng có tr?ng s? l?n nh?t, nghia là t?ng các s? trong do?n là l?n nh?t.
//
//Input
//Dòng th? nh?t ch?a m?t s? nguyên n=10^6 .
//
//Dòng th? hai ch?a n s? nguyên.
//
//Output
//Ghi ra duy nh?t m?t s? nguyên là tr?ng s? l?n nh?t tìm du?c.
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
