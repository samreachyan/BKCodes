#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
template < class calculate>
calculate sum(calculate a, calculate b){
	return a+b;
}


int main(){
	int a,b;
	cout<<"Input a = ";
	cin>>a;
	cout<<"Input b = ";
	cin>>b;
	
	cout<<"Result of sum = "<<sum(a ,b)<<endl;
	
	getch();
}
