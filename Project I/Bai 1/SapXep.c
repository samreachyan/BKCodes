#include <stdio.h>
#include <stdlib.h>

int n;
int* A;

void readFile(char * name){
	FILE * f = fopen(name, "r");
	fscanf(f,"%d", &n); // read number from file -> n
	A = (int*)malloc(n*sizeof(int));

	for (int i = 0; i < n; ++i) {
		fscanf(f,"%d",&A[i]);
	}
	fclose(f);
}
void createFile(char * file){
	FILE * f1 = fopen(file, "w");
	for (int i = 0; i < n; ++i) {
		fprintf(f1, "%d\n", A[i]);
	}
	fclose(f1);
}
void readSortedFile() {
	FILE * f = fopen("SORT.OUT","r");
	for (int i = 0; i < n; ++i) {
		int data;
		fscanf(f, "%d",&data);
		printf("%d ", data);
	}
	fclose(f);
	printf("\n");
}
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
void merge (int A[], int L, int M, int R) {
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
	if (L < R) {
		int M = (L+R)/2;
		mergeSort(A, L, M);
		mergeSort(A, M+1, R);
		merge(A, L, M, R);
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
	printf("\n");
}

void printMenu(){
	printf("\n1. Insertion sort.");
	printf("\n2. Selection sort.");
	printf("\n3. Buble sort.");
	printf("\n4. Merge sort.");
	printf("\n5. Quick sort.");
	printf("\n6. Heap sort.");
	printf("\n\nEnter your choice : ");
	int c ; scanf("%d", &c);

	switch(c) {
		case 1: 
			printf("\nArray sorted by insertionSort.");
			insertionSort(A, n);
			break;
		case 2: 
			printf("\nArray sorted by selectionSort.");
			selectionSort(A, n);
			break;
		case 3: 
			printf("\nArray sorted by bubleSort.");
			bubleSort(A, n);
			break;
		case 4:
			printf("\nArray sorted by mergeSort.");
			mergeSort(A, 0, n-1);
			break;
		case 5: 
			printf("\nArray sorted by quickSort.");
			quickSort(A, 0 ,n);
			break;
		case 6:
			printf("\nArray sorted by heapSort.");
			heapSort(A, n);
			break;
		default:
			printf("\nInvalid number.\n");
	}
}

int main(int argc, char * argv[]) {
	// printf("So luong tham so %d\n", argc);
	char name[20];
	for(int i = 1; i<argc; i++){
		readFile(argv[i]);
		// printf("%s\n", argv[i] );
	}
	PrintArray(A,n);
	printMenu();
	createFile("SORT.OUT");
	readSortedFile();

	free(A);
	return 0;
}