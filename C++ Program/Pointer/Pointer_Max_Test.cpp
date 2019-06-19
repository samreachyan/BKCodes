#include<iostream>
#include<conio.h>
using namespace std;
#include<string>

//int main()
//{
//	int n;
//	cout<<"How to many time enter ? ";
//	cin>>n;
//	int **p=new int *[n];//creat 2 row in pointer;
//	
//	for(int i=0;i<n;i++)
//	{
//		p[i]=new int [4];	
//	}
//	
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			cout<<"a["<<i<<"]["<<j<<"] = " ;
//			cin>>*(*(p+i)+j);
//		}
//		cout<<"----------"<<endl;
//	}
//
//	cout<<endl<<endl;
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<4;j++)
//		{
//			cout<<*(*(p+i)+j)<<"\t";
//		}
//		cout<<"\n\n";	
//	}
//	getch();
//}


int *findmax( int *, int);
int main()
{
	int n;
	cout<<"Enter N numbers to be run : "; cin>> n;
	int *value = new int[n];
	for ( int i=0 ; i<n ; i++)
	{
		cout<<"Input value #"<<i<<" : "; cin>>value[i];
	}
	cout<<endl<<endl;
	int * Max ;
	Max = findmax(value , n);
	cout<<"The maximum value is : "<<*Max<<endl;
	
}
int *findmax( int * x, int y)
{
	int *maximum = x;
	for ( int i=1 ; i<y ; i++)
	{
		if (  x[i] > *maximum )
		{
			maximum = &x[i];
		}
	}
	return maximum;
}
