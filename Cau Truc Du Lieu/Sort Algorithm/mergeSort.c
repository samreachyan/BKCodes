#include <stdio.h>
#include <stdlib.h>

int a[5] = {1,5,9,6,8};
// int TA[5];
void merge(int A[], int L, int M, int R) {
// tron 2 day da sap A[L..M] va A[M+1..R]
	int i = L; int j = M+1;
	int TA[R];
	for(int k = L; k <= R; k++){
		if(i > M){ 
			TA[k] = A[j]; j++;
		} else if ( j > R ) { 
			TA[k] = A[i]; 
			i++;
		} else {
			if(A[i] < A[j]){ 
				TA[k] = A[i]; i++;
			} else {
				TA[k] = A[j]; j++;
			}
		}
	}
	//copy array to original
	for(int k = L; k <= R; k++) A[k] = TA[k];
}
void mergeSort(int A[], int L, int R) {
	if(L < R){
		int M = (L+R)/2;
		mergeSort(A,L,M);
		mergeSort(A,M+1,R);
		merge(A,L,M,R);
	}
}
void printArray(int A[], int n) {
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", A[i] );
	}
}

int main(int argc, char const *argv[])
{
	printf("Hello world\n");
	int n = sizeof(a)/sizeof(int);
	printArray(a,n);
	printf("\n");
	mergeSort(a,0,n-1);
	printArray(a,n);
}