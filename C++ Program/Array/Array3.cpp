#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[20],i,n,j,tmp;
	cout<<"Enter n number : "; cin>>n;
	
	for ( i=0 ; i<n; i++)
	{
		cout<<"Enter element a["<<i<<"] :"; cin>>a[i];
	}
	for (i=0 ; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	for (i=0 ; i<n-1; i++)
		for ( j=i+1 ; j<n; j++)
		if (a[i]>a[j])
		{
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	cout<<"\nAfter shorted :\n";
	for(i=0 ; i<n; i++)
		cout<<a[i]<< " ";
	
	for (i=0 ; i<n-1; i++)
		for ( j=i+1 ; j<n; j++)
		if (a[i]<a[j])
		{
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
		}
	cout<<"\nAfter shorted :\n";
	for(i=0 ; i<n; i++)
		cout<<a[i]<< " ";
		
	getch();
}
