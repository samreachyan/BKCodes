#include<iostream>
#include<conio.h>
using namespace std;

void Multi(int x[])
{
	int i;
	for ( i=0 ; i<5; i++)
	{
		x[i]*=5;
	}
}
int main()
{
	int i,m[]={50,60,70,80,90};
	cout<<"Before calling function\n";
	for ( i=0 ; i<5; i++)
	{
		cout<<m[i]<<" ";
	}
	Multi(m);
	cout<<"\nAfter calling function\n";
	for (i=0 ; i<5 ; i++)
	{
		cout<<m[i]<<" ";
	}
	getch();
}
