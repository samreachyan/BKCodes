#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>
int main()
{
	back:
	int n, i, j;
	cout<<"Enter nRow : "; cin>>n;
	
	for ( i=1 ; i<=n ; i++ )
	{
		for ( j=n ; j>=(n+1)-i ; j-- )
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	getch();
	goto back;
}
