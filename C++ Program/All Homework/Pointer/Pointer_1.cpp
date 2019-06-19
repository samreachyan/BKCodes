#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	static int a[4]={10,11,12,13};
	int i, n=4 ,temp;
	
	cout<<"Contents of the array "<<endl;
	
	for (i=0 ; i<n ; i++)
	{
		temp = *((a) + (i));
		cout<<"Value = "<<temp<<endl;
	}
	cout<<endl<<endl;
	for (i=0 ; i<n; i++)
	{
		temp = *(&(a)[0] +(i));
		cout<<"Value = "<<temp<<endl;
	}
}
