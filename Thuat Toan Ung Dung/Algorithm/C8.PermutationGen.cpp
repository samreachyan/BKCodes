//Cho 1 m?t ho�n v? H d? d�i n v?i c�c th�nh ph?n n?m trong t?p {1,2,�,n}. 
//T�m ho�n v? k? ti?p c?a ho�n v? H trong th? t? t? di?n.
//
//Input
//D�ng d?u ghi 1 s? nguy�n duong n=104.
//
//D�ng th? 2 ghi n s? nguy�n duong =n c�ch nhau b?i d?u c�ch l� ho�n v? H.
//
//Output
//Ghi ra ho�n v? H tr�n m?t d�ng duy nh?t, c�c th�nh ph?n c�ch nhau b?i d?u c�ch. N?u kh�ng t?n t?i th� ghi ra -1.
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
