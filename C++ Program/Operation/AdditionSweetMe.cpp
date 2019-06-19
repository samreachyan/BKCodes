#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	back:
	system("cls");
	int n,S=0;
	cout<<"\nCalculate addition of S=1+2+3+...+n \n--------------------------------------\n\n";
	cout<<"Input value of n: "; cin>>n;
	S=n*(n+1)/2;
	cout<<"The result S= "<<S;
	//getch();
	goto back;
}
