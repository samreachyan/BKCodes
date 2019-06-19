#include<iostream>
#include<conio.h>
using namespace std;
//#include<string>

int main()
{
	char *p[3]; 
	p[0]="Samreach";
	p[1]="Virak";
	p[2]="Bunthouen";
	
//	for (int i=0 ; i<3 ; i++)
//	{
//		cin>>a[i];
//		p[i]=&a[i];
//	}
	
	
//	for (int i=0 ; i<3 ; i++)
//	{
//		cout<<" Enter P[ "<<i<<" ] : ";
//		cin>>p[i];
//	}
	cout<<"Contents of array:"<<endl;
	for ( int i=0 ; i<3 ;i++)
	{
		cout <<"Result of pointer ["<<i<<"] : "<<p[i]<<endl;
	}
}
