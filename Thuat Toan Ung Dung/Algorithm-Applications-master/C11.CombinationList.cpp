//Cho 2 s? nguy�n duong n,m. �ua ra chu?i t? h?p ch?p m c?a n ph?n t? trong t?p {1,2,�n} th? k trong th? t? t? di?n.
//
//Input
//D�ng d?u ghi 3 s? nguy�n duong n,m,k c�ch nhau b?i d?u c�ch, n,m=10^4;k=10^9.
//
//Output
//Ghi ra chu?i t? h?p ch?p m c?a n ph?n t? th? k tr�n m?t d�ng duy nh?t, c�c th�nh ph?n c�ch nhau b?i d?u c�ch. 
//N?u kh�ng t?n t?i th� ghi ra -1.
//
//Examples
//input
//1 1 1
//output
//1 
//input
//4 3 6
//output
//-1

#include<iostream>
 
using namespace std;
 
int main()
{
	int n, m, k;
	cin >>n; cin >>m; cin >> k;
	int count = 0;
	int temp = 0;
	
	int M[m];
	int i, j;
	for(i = 0; i< m; i++)
	{
		M[i] = i+1;
	}
	
	
	
	while(count != k - 1)
	{
		for(i = m-1; i>=0 ; i--)
		{
			if(M[i] < n - m + i + 1)
			{
				M[i] +=1;
				for(j = i + 1; j<m ; j++)
				{
					M[j] = M[i] + j - i;
				}
				temp ++;
				break;
			}
		}
		count ++;
	}
	
	if(count > temp)
		cout << "-1";
	else
		for(i = 0; i< m; i++)
		{
			cout << M[i] << " ";
		}
	
	return 0;
}
