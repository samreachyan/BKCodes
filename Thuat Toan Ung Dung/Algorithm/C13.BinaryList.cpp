//Cho 1 s? nguy�n duong n. �ua ra x�u nh? ph�n d? d�i n th? k trong th? t? t? di?n m� kh�ng c� i s? 0 li�n ti?p.
//
//Input
//D�ng d?u ghi 3 s? nguy�n duong n,k,i trong d� n,i=104,k=109 c�ch nhau b?i d?u c�ch
//
//Output
//Ghi ra x�u nh? ph�n d? d�i n th? k m� kh�ng c� i s? 0 li�n ti?p tr�n m?t d�ng duy nh?t, 
//c�c th�nh ph?n c�ch nhau b?i d?u c�ch. N?u kh�ng t?n t?i th� ghi ra -1.
//
//Examples
//input
//6 4 2
//output
//0 1 1 0 1 0 
//input
//2 3 10
//output
//1 0 

#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
	int n, k, m;
	cin >>n; cin >> k; cin >>m;
	
	int M[n];
	int i, j;
	for(i = 0; i< n; i++)
	{
		if((i + 1) % m ==0)
			M[i] = 1;
		else
			M[i] = 0;
	}
	
	int count = 0;
	int index = 0;
	int temp = 0;
	while(index != k-1)
	{
		for(i = n - 1; i >= 0; i--)
		{
			if(M[i] == 1){
				count ++;
			}
			else
			{
				M[i] = 1;
				for(j = i+ 1; j< n; j++)
				{
					// nhung phan tu cach i 1 khoang = m se gan bang 1
					// con lai thi gan = 0
					if((j - i) % m == 0)
						M[j] = 1;
					else
						M[j] = 0;
				}
				
				count = 0;
				temp ++;
				break;
			}
		}
		index++;
	}
	
	
	if(index > temp)
		cout << "-1";
	else
		for(i = 0; i< n; i++)
			cout << M[i] << " ";
	
	
	
	return 0;
}
