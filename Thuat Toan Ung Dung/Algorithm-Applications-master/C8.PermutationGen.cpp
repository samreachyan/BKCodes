//Cho 1 m?t hoán v? H d? dài n v?i các thành ph?n n?m trong t?p {1,2,…,n}. 
//Tìm hoán v? k? ti?p c?a hoán v? H trong th? t? t? di?n.
//
//Input
//Dòng d?u ghi 1 s? nguyên duong n=104.
//
//Dòng th? 2 ghi n s? nguyên duong =n cách nhau b?i d?u cách là hoán v? H.
//
//Output
//Ghi ra hoán v? H trên m?t dòng duy nh?t, các thành ph?n cách nhau b?i d?u cách. N?u không t?n t?i thì ghi ra -1.
//
//Example
//input
//5
//3 2 1 5 4
//output
//3 2 4 1 5 

#include<iostream>
 
using namespace std;
 
void swap(int *a, int *b)
{
	int *temp = a;
	a = b;
	b = temp;
}

// ham dao nguoc chuoi tu k den n 
void reverseArray(int arr[], int k, int n)
{
	if(k == n - 2)
	{
		swap(arr[k], arr[n-1]);
	}
	else{
		for(int i = 0; i < (n-k)/2; i++){
			swap(arr[k+i], arr[n-1-i]);
		}
	}
}

// ham tim hoan vi ke tiep 
int nextPermutation(int arr[], int n)
{
	int i = n-1;
	while(arr[i] < arr[i-1])
	{
		i--;
		if(i == 0)
			return -1;
	}
	int k = i-1;
	i = n-1;
	while(arr[i] < arr[k])
	{
		i--;
	}
	int j = i;
	swap(arr[k], arr[j]);
	reverseArray(arr, k + 1, n);
	return 0;
}
 
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i< n; i++)
	{
		cin >> arr[i];
	}
	int result = nextPermutation(arr, n);
	if(result == 0)
		for(int i = 0; i< n; i++)
		{
			cout << arr[i] << " ";
		}
	else{
		cout << result;
	}
	
}
