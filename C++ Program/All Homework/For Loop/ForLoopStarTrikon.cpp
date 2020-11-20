#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>
int main()
{
	int nCol, i, j;
	cout<<"Enter nRow : "; cin>>nCol;
	
	for (i=1 ; i<=nCol ; i++)
	{
		for ( j=1 ;j<=i ; j++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	getch();
}
