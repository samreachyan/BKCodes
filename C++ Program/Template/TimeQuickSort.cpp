#include<iostream>
#include<conio.h>
#include<ctime>
#include<ctype.h>
#include<cstdlib>
#include<stdio.h>
using namespace std;

void display( int arr[], int size){
	for (int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void insertion(int arr[], int size){
	int j, temp;
	for ( int i=1  ; i<size; i++){
		j=i;
		while ( j>-1 &&  arr[j-1]>arr[j]){
			temp = arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	//	display(arr, size);
	}
}

void quicksort(int arr[], int left, int right){
	int i=left;
	int j=right;
	int tmp;
	int pivot = arr[(left+right)/2];
	while (i<= j){
		while( arr[i]<pivot)
			i++;
		while( arr[j]>pivot)
			j--;
		if (i <= j){
			tmp = arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;
			i++;
			j--;
		}
	}
	if (left<j)
		quicksort(arr,left, j);
	if (i<right)
		quicksort(arr, i , right); 
}
double getTime(clock_t time1, clock_t time2){
	double ticks = time1 - time2;
	return (ticks*10)/CLOCKS_PER_SEC;
}
void getData(int arr[], int size){
	srand(time(0)) ;
	for( int i=0 ;i<size ; i++){
		arr[i]= rand()%100+1;
	}
}

int main(){
	r:
		system("cls");
	const int size=10000;
	int numbers[size];  
	getData(numbers, size);
	clock_t begin=clock();
	insertion (numbers, size);
	clock_t end = clock();
	cout<<"Insertion sort: "<<getTime(end, begin)<<" ms"<<endl;
	getData(numbers, size); 
	begin=clock();
	quicksort(numbers, 0, size);
	end=clock();
	cout<<"Quicksort: "<<getTime(end, begin)<<" ms"<<endl;
	
	getch();
	goto r;
	
}
