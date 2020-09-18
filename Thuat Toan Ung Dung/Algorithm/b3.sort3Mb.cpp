//Cho m?ng a các s? th?c 32 bit. Hãy s?p x?p m?ng a theo th? t? tang d?n. Luu ý, 
//b? nh? du?c s? d?ng cho bài này là không quá 3MB
//
//Input
//Dòng d?u ch?a m?t s? nguyên là s? ph?n t? c?a m?ng n=106.
//
//Dòng th? hai ch?a n s? th?c, m?i s? th?c có chính xác 2 ch? s? ph?n th?p phân.
//
//Output
//In ra trên m?t dòng m?ng a theo th? t? tang d?n, m?i s? th?c có chính xác 2 ch? s? ph?n th?p phân.

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
 
using namespace std;
 
float a[600000],b1, b2;
int n, m;
FILE *out1, *in1;
 
void process(){
 
	int i, j;
	out1 = fopen("1.txt", "w");
	m = n/2;
	n = n-m;
 
	for(i=0; i<m; i++) scanf("%f", &a[i]);
	sort(a, a+m);
	for(i=0; i<m; i++) fprintf(out1, "%.2f ", a[i]);
 
	fclose(out1);
	
	for(j = 0; j<n ; j++) scanf("%f", &a[j]);
	sort(a, a+n);
	
	in1 = fopen("1.txt", "r");
 
	i = 0;	j = 0;
	fscanf(in1, "%f", &b1);
	
	while(i < m && j < n){
		if (b1 < a[j]){
			i++;
			printf("%.2f ", b1);
			if (i<m)
				fscanf(in1, "%f", &b1);
		}
		else{
			printf("%.2f ", a[j]);
			j++;
		}
	}
	while(i < m){
		i++;
		printf("%.2f ", b1);
		fscanf(in1, "%f", &b1);
	}
	while(j < n){
		printf("%.2f ", a[j]);
		j++;
	}
}
 
// phare 2
void swap_(float *a, float *b) {
    float tmp = *a;
    *a = *b;
    *b = tmp;
}
 
int partition_(int left, int right) {
    float pivot = a[right];
    int i = left - 1;
 
    for(int j = left; j <= right - 1; j ++) {
        if(a[j] > pivot) {
            i++;
            swap_(&a[j],&a[i]);
        }
    }
    swap_(&a[i+1],&a[right]);
    return (i+1);
}
 
void quickSort(int left, int right)
{
    if (left < right)
    {
        int pivot_index = partition_(left, right);
        quickSort(left, pivot_index - 1);
        quickSort(pivot_index + 1, right);
    }
}
void input( int n) {
    for(int i = 0; i < n ; i ++) {
        scanf("%f", &a[i]);
    }
}
void output(int n) {
    for(int i = n - 1; i >= 0 ; i--) {
        printf("%.2f ", a[i]);
    }
}
 
 
int main(){
    scanf("%d",&n);
    if( n > 600000) {
        	process();
    } else {
        input(n);
        quickSort(0,n-1);
        output(n);
    }
	return 0;
}


