#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	back:
	system("cls");
	int a,b,c;
	float d,x1,x2,x;
	cout<<"\nFind root of equation ax2+bx+c=0";
	cout<<"\nInput value a: "; cin>>a;
	cout<<"Input value b: "; cin>>b;
	cout<<"Input value c: "; cin>>c;
	if (a==0 && b!=0)
	{
		x=-c/b;
		cout<<"\nSo there is x= "<<x<<".";
	}
	else if (a==0 && b==0)
	{
		cout<<"\nNo root";
	}
	else 
	{
		d=(b*b)/(4*a*c);
		if (d==0)
		{
			x1=x2=-b/(2*a);
		cout<<"Delta=0 \nSo there is x1=x2= "<<x1<<".";
		}
		else if (d>0)
		{
			x1=(sqrt(d))-b/(2*a);
			x2=(-sqrt(d)-b)/(2*a);
		cout<<"Delta>0 \nSo there are x1= "<<x1<<" and x2= "<<x2<<".";
		}
//		else
//		{
//		cout<<"\nNo root";
//		}
	}
	getch();
	goto back;
} 
