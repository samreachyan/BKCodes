#include<iostream>
using namespace std;
#include<stdlib.h>
#include<antheader.h>
int main()
{
	int i,j,n;
	cout<<"Enter value of n : ";
	cin>>n;
	for (i=0 ;i<n ;i++)
	{
		for ( j=0 ; j<i ; j++ )
		{
			foreColor(6);
			cout<<" *";
		}
		for ( j=i ; j<n ; j++)
		{
			foreColor(2);
			cout<<" -";
		}
		cout<<"\n";
	}
}
