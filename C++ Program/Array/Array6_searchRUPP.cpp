#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,search,f=0,n,a[50];
	
	cout<<"\nEnter n number : "; cin>>n;
	for ( i=0 ; i<n; i++)
	{
		cout<<"Input element ["<<i<<"] :"; cin>>a[i];
	}
	for ( i=0 ; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	back: //label
	cout<<"\n\nSearch : "; cin>>search;
	for ( i=0 ; i<n; i++)
	{
		if ( search==a[i])
		{
			f=1;
			cout<<"Number input is "<<search<<" on index : "<<i;
		}
	}
	if(f==0)
	{
		cout<<"Not found...";
	}
	
	getch();
	goto back;
}
