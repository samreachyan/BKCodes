//Cho m?ng c�c s? th?c a. H�y s?p x?p m?ng A theo th? t? tang d?n b?ng thu?t to�n comb sort
//
//Input
//D�ng d?u ch?a m?t s? nguy�n l� s? ph?n t? c?a m?ng n=10^6.
//
//D�ng th? hai ch?a n s? th?c, m?i s? th?c c� ch�nh x�c 2 ch? s? ph?n th?p ph�n.
//
//Output
//In ra tr�n m?t d�ng m?ng a theo th? t? tang d?n, m?i s? th?c c� ch�nh x�c 2 ch? s? ph?n th?p ph�n.

#include <iostream>
#include <stdio.h>
using namespace std;
 
void swap(double *a, double *b){
	double *temp =a;
	a = b;
	b = temp;
}
  
int getNextGap(int n){
	int gap = n*10/13;
	if(gap < 1)
		return 1;
	return gap;
}
 
void combSort(double arr[], int n)
{
	int gap = n;
	bool swaped = true;
	
	while(gap != 1 || swaped == true)
	{
		gap = getNextGap(gap);
		
		swaped = false;
		
		for(int i = 0; i< n - gap; i++){
			if(arr[i] > arr[i+gap]){
				swap(arr[i], arr[i+gap]);
				swaped = true;
			}
		}
	}
	
}
 
int main()
{
	int n = 0;
	cin >> n;
	double arr[n];
	for (int i = 0; i<n; i++)
	{
		cin>>arr[i];
		arr[i] *= 100;
	}
	combSort(arr, n);
	for (int i = 0; i<n; i++)
	{
		arr[i] = arr[i]/ 100;
		if(i == n-1){
			printf("%.2f", arr[i]);
			break;
		}
		printf("%.2f ", arr[i]);
	}
	return 0;
}

