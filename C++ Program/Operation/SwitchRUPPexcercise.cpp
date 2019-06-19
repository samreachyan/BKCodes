#include<iostream>
#include<conio.h>
#include<antheader.h>
#include<stdlib.h>
using namespace std;

int main()
{
	back:
		cls();
	int choice;
  	float A,B,C=0;
  	foreColor(3);
	cout<<"1. Addition\n";
	cout<<"2. Substraction\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Division\n";
	cout<<"5. Quit\n";
	foreColor(7);
	cout<<"------------------------\n\n";
	foreColor(5);
	cout<<"Enter your choice <from 1-5> : ";
	foreColor(6); cin>>choice; cout<<"\n";
	
	switch (choice)
	{
		case 1:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A+B;
			cout<<"C= "<<C;
			break; // here in the program used (break;) to break the code and run again.
		case 2:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A-B;
			cout<<"C= "<<C;
			break;
		case 3:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A*B;
			cout<<"C= "<<C;
			break;
		case 4:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A/B;
			cout<<"C= "<<C;
			break;
		case 5:
			cout<<"Exiting the program!!\n";
			exit(0);
		default:
			cout<<"Invalid choice.";
			break;
	}
	getch();
	goto back;
}
