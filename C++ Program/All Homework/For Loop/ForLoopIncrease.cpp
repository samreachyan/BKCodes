#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>

//int main()
//{
//	back:
//	cls();
//	int i,j,n;
//	cout<<"Enter number n :";
//	cin>>n;
//	for (i=1 ; i<=n ;i++)
//	{
//		j=i*2;
//		cout<<j<<"\t";
//	}
//	getch();
//	goto back;
//}

int main()
{
	back:
	cls();
	int i,j,n;
	cout<<"Enter number n: ";
	cin>>n;
	for (i=0 ;i<n ;i++)
	{
		j=2*i+1;
		cout<<j<<"\t";
	}
	getch();
	goto back;
}
