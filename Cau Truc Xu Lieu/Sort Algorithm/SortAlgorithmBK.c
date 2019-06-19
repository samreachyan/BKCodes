/*
	wrote : Yan Samreach 
	lecture : Pham Quang Dung
	Year : 20182 , May 20, 2019
	Describe : About sort algorithsm : insertSort, SelectionSort, BubleSort, MergeSort, QuicklySort, HeapSort >> with my loops.
*/

#include <stdio.h> 
#include <stdlib.h>

void insertionSort(int A[], int n) {
	for (int k = 2; k < n; k++) {
		int last = A[k];
		int j = k;
		while( j > 0 && A[j-1] > last) {
		    A[j] = A[j-1];
		    j--;
		}
		A[j] = last;
	}
}

void selectionSort(int A[], int n) {
	for (int k = 0; k < n; ++k) {
		int min = k;
		for (int j = k+1 ; j < n; ++j)
		{
			if (A[min] > A[j]) min = j;
		}
		int tmp = A[min];
		A[min] = A[k];
		A[k] = tmp;
	}
}

void bubleSort (int A[], int n){
	int swapped ;
	do {
		swapped = 0;
		for (int i = 0; i < n; i++) {
			if (A[i] > A[i+1]){
				int tmp = A[i];
				A[i] = A[i+1];
				A[i+1] = tmp;
				swapped = 1;
			}
		}
	} while (swapped == 1);
}

void merg (int A[], int L, int M, int R) {
	int i, j, k; 
    int nL = M - L + 1; 
    int nR =  R - M; 
    int Left[nL], Right[nR]; 
  	
  	for (i = 0; i < nL; i++) 
        Left[i] = A[L + i]; 
    for (j = 0; j < nR; j++) 
        Right[j] = A[M + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = L; // Initial index of merged subarray 
    while (i < nL && j < nR) { 
        if (Left[i] <= Right[j]) { 
            A[k] = Left[i]; 
            i++; 
        } else { 
            A[k] = Right[j]; 
            j++; 
        } 
        k++; 
    }
    // copy sorted array into orginal array 
    while (i < nL) { 
        A[k] = Left[i]; 
        i++; 
        k++; 
    }
    while (j < nR) { 
        A[k] = Right[j]; 
        j++; 
        k++; 
    }
}

/* ham viet ngan hon nhung chua dung */
// void merg (int A[], int L, int M, int R) {
// 	int TA[R];
// 	int i = L;
// 	int j = M+1 ;
// 	for (int k = L; k <= R; ++k) {
// 		if (i > M) {
// 			TA[k] = A[j];
// 			j++;
// 		} else if ( j > R ) {
// 			TA[k] = A[i];
// 			i++;
// 		} else {
// 			TA[k] = A[j];
// 			j++;
// 		}

// 	}
// 	for (int k = L; k <= R; ++k) A[k] = TA[k];
// }

void mergeSort(int A[], int L, int R) {
	if (L < R) {
		int M = (L+R)/2;
		mergeSort(A, L, M);
		mergeSort(A, M+1, R);
		merg(A, L, M, R);
	}
}


void swap(int &a, int &b) { 
    int t = a; 
    a = b; 
    b = t; 
} 
int partition (int A[], int L, int R) {
	int Pivot = A[R];
	int storeIndex = L;
	for (int i = L; i <= R-1; i++) {
		if (A[i] < Pivot) {
			swap(A[storeIndex], A[i]);
			storeIndex++;
		}
	}
	swap(A[storeIndex], A[R]);
	return storeIndex;
}
void quickSort(int A[], int L, int R) {
	if (L < R) {
		int index = partition(A,L,R);
		if ( L < index)
			quickSort(A, L, index-1);
		if ( index < R)
			quickSort(A, index+1, R);
	}
}

void heapify(int A[], int i , int N){
	int L = 2 * i + 1;
	int R = 2 * i + 2;
	int max = i;
	if ( L < N && A[L] > A[max])
		max = L;
	if ( R < N && A[R] > A[max])
		max = R;
	if ( max != i){
		swap(A[i] , A[max]);
		heapify(A, max, N);
	}
}
void buildHeap(int A[], int N) {
	for (int i = N/2-1 ; i >= 0; i--) {
		heapify(A, i, N);
	}
}
void heapSort (int A[], int N) {
	buildHeap(A, N);
	for (int i = N-1 ; i >= 0; i--) {
		swap(A[0], A[i]);
		heapify(A, 0, i);
	}
}
void PrintArray (int A[], int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", A[i]);
	}
}

int main(int argc, char const *argv[])
{
	int A[] = {5,7,3,8,1,2,9,4,6};
	int n = sizeof(A)/sizeof(A[0]);

	printf("\nArray before sort : ");
	PrintArray(A, n);

	printf("\n\n1. Insertion sort.");
	printf("\n2. Selection sort.");
	printf("\n3. Buble sort.");
	printf("\n4. Merge sort.");
	printf("\n5. Quick sort.");
	printf("\n6. Heap sort.");

	printf("\n\nEnter your choice : ");
	int c ; scanf("%d", &c);

	switch(c) {
		case 1: 
			printf("\nArray sorted insertionSort : ");
			insertionSort(A, n);
			PrintArray(A, n);
			break;
		case 2: 
			printf("\nArray sorted selectionSort : ");
			selectionSort(A, n);
			PrintArray(A, n);
			break;
		case 3: 
			printf("\nArray sorted bubleSort : ");
			bubleSort(A, n);
			PrintArray(A, n);
			break;
		case 4:
			printf("\nArray sorted mergeSort : ");
			mergeSort(A, 0, n-1);
			PrintArray(A, n);
			break;
		case 5: 
			printf("\nArray sorted quickSort : ");
			quickSort(A, 0 ,n);
			PrintArray(A, n);
			break;
		case 6:
			printf("\nArray sorted heapSort : ");
			heapSort(A, n);
			PrintArray(A, n);
			break;
		default:
			printf("\nInvalid number.\n");
	}
	printf("\n");
	return 0;
}