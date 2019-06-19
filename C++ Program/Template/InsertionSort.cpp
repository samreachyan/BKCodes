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


int main(){
	r:
		system("cls");
	const int size=10;
	int numbers[size];
	srand (unsigned(time(0)));
	for (int i=0 ; i<size ; i++){
		numbers[i]= (rand()%100+1);
		cout<< numbers[i] <<" ";
	}
	cout<<endl;
	
	insertion(numbers , size);
	display(numbers , size);
	getch();
	goto r;
	
}
