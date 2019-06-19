#include<iostream>
#include<conio.h>
using namespace std;
#include<antheader.h>

//int sum(int x) //
//{
//	int result=0;
//	for ( int i=0 ; i<x; i++)
//		result += 2*i + 1 ;
//	return result;
//}

//----------------

int sum (int x)
{
	int result=1 ;
	for (int i=0 ; i<x; i++)
	{
		result += i/(i*(i-1));
	}
	return result;
}


int main()
{
	Back:
	cls();
	int n;
	cout<<"sum = 1+3+5+...+n "<<endl;
	cout<<"Enter the number : ";
	cin>>n;
	
	cout<<sum(n);
	getch();
	goto Back;
}
