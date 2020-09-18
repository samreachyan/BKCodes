//Cho 1 m?t s? n. Ðua ra hoán v? d? dài n th? k trong th? t? t? di?n.
//
//Input
//Dòng d?u ghi 2 s? nguyên duong n,k (n=104,k=109) cách nhau b?i d?u cách.
//
//Output
//Ghi ra hoán v? th? k trên m?t dòng duy nh?t, các thành ph?n cách nhau b?i d?u cách. N?u không t?n t?i thì ghi ra -1.
//
//Examples
//input
//1 2
//output
//-1 
//input
//3 4
//output
//2 3 1 

#include<iostream>
#include<vector>
using namespace std;
 
#define V 15
long long M[V];
 
long long giaithua(int n)
{
	if(n==0 || n==1)
		M[n] = 1;
	else{
		M[n] = n * giaithua(n-1); 
	}
	return M[n];
}
 
int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	if(n < 14){
		if(giaithua(n) < k){
			int result = -1;
			cout<<result;
			return 0;
		}
	}
	long long gt = giaithua(14);
	int i = 14;
	
	//tim gia tri ma  (c+1)! > k > c!
	while(M[i] > k){
		i--;
	}
	int c = i;
	
	//vector chua thuong va so du cua k khi chia cho giai thua cua (c:1)
	vector<int> v_thuong;
	vector<int> v_sodu;
	for( i = c; i > 0; i--)
	{
		int r = k % M[i];
		int d = k/M[i];
		k = r;
		v_thuong.push_back(d);
		v_sodu.push_back(r);
	}
	
	//in ra nhung phan tu ko bi thay doi
	for(i = 1; i < n - c; i++)
	{
		cout << i << " ";
	}
	
	//vector chua cac so se bi hoan vi
	int j = n-c;
	vector<int> permutation;
	for(i = j; i <=n ; i++)
	{
		permutation.push_back(i);
	}
	
	//thuc hien hoan vi de thu duoc hoan vi thu k
	for(i=0; i< v_thuong.size(); i++)
	{
		if(v_sodu[i] > 0)
		{
			cout << permutation[v_thuong[i]] << " ";
			permutation.erase(permutation.begin() + v_thuong[i]);
		}
		else{
			cout<< permutation[(v_thuong[i] - 1) ] << " ";
			permutation.erase(permutation.begin() + (v_thuong[i] - 1));
			for(int l = permutation.size()-1; l >=0; l--){
				cout<<permutation[l]<<" ";
			}
			break;
		}
	}
	return 0;
}
