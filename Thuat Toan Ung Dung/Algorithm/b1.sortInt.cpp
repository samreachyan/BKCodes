//Cho m?ng các s? nguyên a. Hãy s?p x?p m?ng A theo th? t? tang d?n
//
//Input
//Dòng d?u ch?a m?t s? nguyên là s? ph?n t? c?a m?ng n=10^6.
//
//Dòng th? hai ch?a n s? nguyên.
//
//Output
//In ra trên m?t dòng m?ng a theo th? t? tang d?n.



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
