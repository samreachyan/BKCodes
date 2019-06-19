/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: sort array
*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int count = 0, temp;
	int a[100];
	printf("\n");
	do {

		printf("Nhap vao so thuc : ");
		scanf("%d", &a[count]);
		++count;

	} while ( count <=100 && a[count-1]<=100 );

	// sort number in array
	printf("\nDay so da sap xep : \n");
	for ( int i=0 ; i <count-1 ; ++i){
		for (int j=i+1 ; j< count-1 ; ++j){
			if (a[i]<a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j]= temp;
			}
		}
	}
	// print the result 
	for (int i=0 ; i < count-1 ; ++i){
		printf("%d\n", a[i]);
	}

	printf("\nBan da nhap vao %d lan", count);
	return 0;
}