#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

template <class T> 
	T sum(T a, T b){
		return a+b;
	}
	
template <class T> 
	T average(T arr[] , int n){
		T sum=0;
		for(int i=0;i<n;i++){
			sum += arr[i];
		}
			cout<<sum/n;
	}

int main(){
	
	float arr[4]={10.3,20.1,30.4,40};
	for (int i=0 ; i< sizeof(arr)/sizeof(float) ; i++)
		cout<<"\t"<<arr[i];
	cout<<"\n\n The average = ";
	average(arr,4);
	getch();
}
