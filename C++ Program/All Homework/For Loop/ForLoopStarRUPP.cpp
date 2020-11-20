#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>

int main()
{
	r:
	int i,j,n;
	cout<<"Enter number of n : ";
	cin>>n;
	for ( i=1 ; i<=n ;i++ )
	{
		cout<<i<<"\n";
	}
	getch();
	goto r;
}
