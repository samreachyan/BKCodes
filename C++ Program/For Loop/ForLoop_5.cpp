#include<iostream>
using namespace std;
int main()
{
	back:
	int i, j,n;
	cout<<"Enter n : "; cin>>n;
	
	//12345
//	for ( i=1 ; i<=n ; i++ )
//	{
//		for ( j=i ; j<n ;j++)
//		{
//			cout<<" ";
//		}
//		for ( j=0 ;j<i ;j++ )
//		{
//			cout<<" "<<i;
//		}
//		cout<<"\n";
//	}

	//86421 wrong
//	for ( i=0 ; i<n ; i++ )
//	{
//		for ( j=2*i ; j<=2*n+2 ; j++ )
//		{
//			cout<<"*";
//		}
//		cout<<"\n";
//	}

	
	//13579
	for ( i=0 ; i<n ;i++)
	{
		for ( j=i ; j<n ;j++ )
		{
			cout<<" ";
		}
		for ( j=0 ; j<2*i+1 ; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}

	goto back;
}
