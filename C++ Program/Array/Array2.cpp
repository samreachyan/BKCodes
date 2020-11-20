#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	back:
	int a[20], n,i,sum=0,min,max;
	cout<<"Enter n number : "; cin>>n;
	for ( i=0 ; i<n ; i++)
	{
		cout<<"Enter element a["<<i<<"] : "; cin>>a[i];
	}
	for ( i=0 ; i<n ; i++)
	{
		cout<<a[i]<<" ";
		sum=sum+a[i];
	}
	max=a[0];
	min=a[0];
	for ( i=0 ; i<n ; i++)
	{
		if ( max<a[i])
		{
			max=a[i];
		}
		if ( min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"\n\nSum : "<<sum;
	cout<<"\nMax : "<<max;
	cout<<"\nMin : "<<min;
	
	getch();
	goto back;
}
