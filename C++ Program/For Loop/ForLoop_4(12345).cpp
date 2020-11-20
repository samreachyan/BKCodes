#include<iostream>
using namespace std;
#include<stdlib.h>

//int main()
//{
//	int i,j,n,k=1;
//	cout<<"Enter n : "; cin>>n;
//	for ( i=0 ; i<n ; i++ )
//	{
//		for ( j=0 ; j<=i ; j++ )
//		{
//			cout<<" "<<k; k++;
//		}
//		cout<<"\n";
//	}
//}

int main()
{
	int i,j,n;
	cout<<"Enter n : "; cin>>n;
	for (i=0 ; i<n ; i++)
	{

		for ( j=i ; j<n; j++ )
		{
			cout<<" "<<(n-i);
		}
		cout<<"\n";
	}
}
