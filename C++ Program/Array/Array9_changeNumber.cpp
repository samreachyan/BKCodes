#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5},i,s,k=0,j=0;
	
	for ( i=0 ; i<5 ; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nChange the number : ";
	cin>>s;
	for ( i=0 ; i<5 ; i++)
	{
		if (s==a[i])
		{
			cout<<"Enter new number :";
			cin>>a[i];
		}
	}
	for ( i=0 ; i<5 ; i++)
		cout<<a[i]<<" ";
	
	getch();
}
