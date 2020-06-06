//Cho 1 s? nguyên duong n. Ðua ra xâu nh? phân d? dài n th? k trong th? t? t? di?n mà không có i s? 0 liên ti?p.
//
//Input
//Dòng d?u ghi 3 s? nguyên duong n,k,i trong dó n,i=104,k=109 cách nhau b?i d?u cách
//
//Output
//Ghi ra xâu nh? phân d? dài n th? k mà không có i s? 0 liên ti?p trên m?t dòng duy nh?t, 
//các thành ph?n cách nhau b?i d?u cách. N?u không t?n t?i thì ghi ra -1.
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
