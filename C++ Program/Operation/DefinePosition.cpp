#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	back: //label
	system("cls"); // this commen run to clear the message
	
	int a;
	cout<<"Enter value of a: "; cin>>a;
	
	if (a>0)
	{
		cout<<"a is 'positive'.";
	}
	else if (a<0)
	{
		cout<<"a is 'negative'.";
	}
	else 
	{
		cout<<"a is 'zero'.";
	}
	getch();
	goto back; // back to label
}
