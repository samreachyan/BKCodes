#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>
int main()
{
	int nRow, nCol, i,j;
	foreColor(3);
	cout<<"Enter nRow : "; cin>>nRow;
	cout<<"Enter nCol : "; cin>>nCol;
	cout<<"\n";
	foreColor(4);
	for ( i=0 ; i<nRow ; i++ )
	{
		for ( j=0 ; j<nCol ; j++ )
		{
			cout<<" +";
		}
		cout<<"\n";
	}
	getch();
}
