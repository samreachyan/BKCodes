#include<iostream>
#include<conio.h>
using namespace std;
// array 2D
int main()
{
	int a[2][3]={ {10,12,14},
				{20,22,24} } ;
	int i , j, m=2, n=3 , temp , *ptr;
	
	cout<<"Contents of the array "<<endl;
	for ( i=0 ; i<m ; i++)
	{
		for ( j=0 ; j<n ; j++)
		{
			temp = *(*(a+i)+j);
			cout<<temp<<"\t";
		}
		cout<<"\n";
	}
}

