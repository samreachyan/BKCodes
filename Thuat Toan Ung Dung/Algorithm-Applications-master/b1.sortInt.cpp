//Cho m?ng c�c s? nguy�n a. H�y s?p x?p m?ng A theo th? t? tang d?n
//
//Input
//D�ng d?u ch?a m?t s? nguy�n l� s? ph?n t? c?a m?ng n=10^6.
//
//D�ng th? hai ch?a n s? nguy�n.
//
//Output
//In ra tr�n m?t d�ng m?ng a theo th? t? tang d?n.



#include<iostream>
 
using namespace std;
 
void swap(int *a, int *b){
	int *temp = a;
	a = b;
	b= temp;
}
 
void comb_sort(int arr[], int n){
	float shrink = 1.3;
	int gap = n;
	int sorted = 0;
	while(gap > 1 || sorted == 0)
	{
		gap = gap/shrink;
		int i = 0;
		if(gap < 1)
			gap =1;
		if (gap == 1)
			sorted = 1;
		while(i + gap < n)
		{
			if(arr[i] > arr[i + gap]){
				swap(arr[i], arr[i+gap]);
				if(gap == 1){
					sorted = 0;
				}
					
			}
			i++;
		}
	}
}
 
int main()
{
	int n = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i< n;i++)
	{
		cin >> arr[i];
	}
	comb_sort(arr, n);
	for (int i = 0; i<n; i++){
		cout << arr[i] << " ";
	}
}
