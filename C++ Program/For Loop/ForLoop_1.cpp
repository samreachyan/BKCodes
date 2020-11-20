#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
#include<antheader.h>

//int main()
//{
//	int i,j,nCol, nRow;
//	cout<<"Enter nRow : "; cin>>nRow;
//	cout<<"Enter nCol : "; cin>>nCol;
//	for ( i=0 ; i<nRow ; i++ )
//	{
//		for ( j=nCol ; j>0 ;j-- )
//		{
//			cout<<" *";
//		}
//		cout<<"\n";
//	}
//}


//int main()
//{
//	int i,j,n;
//	cout<<"Enter n : "; cin>>n;
//	for ( i=1 ; i<=n ;i++ )
//	{
//		for ( j=1 ; j<=i ; j++ )
//		{
//			cout<<"*";
//		}
//	cout<<"\n";
//	}
//}

//int main()
//{
//	int i,j,n;
//	cout<<"Enter n :"; cin>>n;
//	for ( i=1 ; i<=n ;i++)
//	{
//		for ( j=i ; j<=n ; j++ )
//		{
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
//}

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
