#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>
using namespace std;

void display( int arr[], int size){
	for (int i=0 ; i<size ; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
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

int main(){
	r:
		system("cls");
	const int size=100;
	int numbers[size];
	srand (unsigned(time(0)));
	for (int i=0 ; i<size ; i++){
		numbers[i]= (rand()%100+1);
	//	cout<< numbers[i] <<" ";
	}
	cout<<"Unsorted array: "<<endl;
	display(numbers , size);
	cout<<endl<<endl<< "Sorting array...."<<endl<<endl;
	quicksort(numbers, 0, size-1);
	cout<<"Sorted array: "<<endl;
	display(numbers, size);
	getch();
	goto r;
	
}
