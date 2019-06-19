#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
	back:
	system("cls");
	int n ,i, j,z;
	cout<<"Enter n :"; cin>>n;
	int k=n;
	for ( i=0 ; i<=n ; i++)
	{
		for (j=1 ; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n"; k++;
		for ( z=i ; z<=n; z++)
		{
			cout<<"-";
		}
	}
	getch();
	goto back;
	
}
