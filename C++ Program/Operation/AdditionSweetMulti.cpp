#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	back:
	system("cls");
	int n,S=0;
	cout<<"\nCalculate addition of S=2+4+...+2n \n--------------------------------------\n\n"; 
	cout<<"Enter value n: "; cin>>n;
	S=n*(1-n)/2;
	cout<<"The result S= "<<S;
	getch();
	goto back;
}
