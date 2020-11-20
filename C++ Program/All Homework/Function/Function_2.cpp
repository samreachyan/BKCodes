#include<iostream>
#include<conio.h>
using namespace std;
#include<antheader.h>

void menu()
{
	cout<<"\na- Addition"<<endl;
	cout<<" s- Subtraction"<<endl;
	cout<<" m- Multiplication"<<endl;
	cout<<" d- Division"<<endl;
	cout<<" q- Quit "<<endl;
	cout<<" Choose an option :> ";
}

int main()
{
	Back:
	cls();
	
	float add(float , float);
	float sub(float , float);
	float mul(float , float);
	float div(float , float);

	float a,b, result;
	char choice;
	cout<<" Demonstration of pointer to function"<<endl;
	cout<<" Enter number a : " ; cin>>a;
	cout<<" Enter number b : " ; cin>>b;
	menu();
	cin>>choice;
		switch (choice)
		{
			case 'a':
				result = add (a,b);
				cout<<result<<endl;
				break;
			case 's':
				result = sub(a,b);
				cout<<result<<endl;
				break;
			case 'm':
				result = mul(a,b);
				cout<<result<<endl;
				break;
			case 'd':
				result = div(a,b);
				cout<<result<<endl;
				break;
			case 'q':
				exit(1);
				break;
		}
	getch();
	goto Back;
}

float add ( float x, float y)
{
	return(x+y);
}
float sub (float x, float y)
{
	return (x-y);
}
float mul (float x, float y)
{
	return (x*y);
}
float div( float x, float y)
{
	return (x/y);
}

