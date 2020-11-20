#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>
int main()
{
	back:
	cls();
	int i,j,k,n;
	cout<<"Enter number : "; cin>>n;
	cout<<"How many time : "; cin>>k;
	cout<<"\n______________________________________\n";
	for ( i=1 ; i<=k ; i++)
	{
		j=n*i;
		cout<<n<<" * "<<i<<" = "<<j<<"\n";
	}
	cout<<"_______________________________________";
	getch();
	goto back;
}
