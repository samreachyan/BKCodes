#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstdlib>

using namespace std; 
int linearsearch(int arr[], int size, int key){
	for (int i=0 ; i<size; i++){
		if( key== arr[i])
			return i ;
	}
	return -1;
}

int main(){
	start:
	system("cls");
	const int size=15;
	int numbers[size];
	srand((unsigned) time(0));
	for (int i=0 ; i<size ;i++){
		numbers[i]= (rand()%100+1);
		cout<<numbers[i]<<" ";
	}
	int key;
	cout<<endl<<"Enter a key : "; cin>>key;
	int retValue= linearsearch (numbers , size, key);
	if(retValue >=0 ){
		cout<<"\nKey found at position "<< retValue<<endl;
	}
	else{
		cout<<"\nKey not found...";
	}
	getch();
	goto start;
}
