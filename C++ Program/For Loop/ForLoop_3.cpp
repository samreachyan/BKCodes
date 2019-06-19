#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>

int main()
{
	int i,j,n;
	cout<<"Enter n : "; cin>>n;
	for (i=0 ; i<n ;i++)
	{
		for ( j=0 ; j<i ;j++ )
		{
			cout<<" ";
		}
		for ( j=i; j<n ;j++ )
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	for ( i=1 ; i<=n; i++ )
	{
		for ( j=i ; j<n ;j++ )
		{
			cout<<" ";
		}
		for ( j=i ; j>0 ; j-- )
		{
			cout<<" *";
		}
		cout<<"\n";
	}
}
