#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>

//int main()
//{
//	int i,j,n;
//	cout<<"Enter n : "; cin>>n;
//	for (i=0 ; i<n ;i++)
//	{
//		for ( j=0 ; j<i ;j++ )
//		{
//			cout<<" ";
//		}
//		for ( j=i; j<n ;j++ )
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
//	for ( i=0 ; i<n; i++ )
//	{
//		for ( j=i ; j<=n ;j++ )
//		{
//			cout<<" ";
//		}
//		for ( j=i ; j>=0 ; j-- )
//		{
//			cout<<" *";
//		}
//		cout<<"\n";
//	}
//}


int main()
{
	int i, j, n, k;
	cout<<"Enter n : "; cin>>n;
	for ( i=0 ; i<n; i++ )
	{
	
		for ( j=0 , k=n; j<=i ; j++ ,k--)
		{
			if ( k%2 != 0 )
			{
				cout<<" -";
			}
			else 
			{
				cout<<" +";
			}
		}
		cout<<"\n";
	}
}
