//Cho 2 s? nguyên duong n,m. Ðua ra chu?i t? h?p ch?p m c?a n ph?n t? trong t?p {1,2,…n} th? k trong th? t? t? di?n.
//
//Input
//Dòng d?u ghi 3 s? nguyên duong n,m,k cách nhau b?i d?u cách, n,m=10^4;k=10^9.
//
//Output
//Ghi ra chu?i t? h?p ch?p m c?a n ph?n t? th? k trên m?t dòng duy nh?t, các thành ph?n cách nhau b?i d?u cách. 
//N?u không t?n t?i thì ghi ra -1.
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
