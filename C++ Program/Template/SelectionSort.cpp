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
void selection(int arr[], int size){
	int first, temp;
	for (int i=size-1 ; i>0 ; i--){
		first =0;
		for (int j=1 ; j<=i ; j++){
			if(arr[j] > arr[first])
				first = j ;
			temp = arr[first];
			arr[first]= arr[i];
			arr[i]= temp;
		}		
		//display(arr, size);
	}
}

int main(){
	r:
		system("cls");
	const int size=10 ;
	int numbers[size];
	srand(unsigned(time(0)));
	for (int i=0 ; i<size; i++) {
		numbers[i] = (rand()%100 +1);
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
	selection(numbers , size);
	display(numbers, size);
	
	
	getch();
	goto r;
}
