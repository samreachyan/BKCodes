#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
	int beer[5];
	int i;
	for ( i=0 ; i<4 ; i++)
	{
		cout<<"Enter elements ["<<i<<"] : ";
		cin>>beer[i];
	}
	for ( i=0 ; i<4 ; i++)
	{
		cout<<beer[i]<<"\n";
	}
	getch();
}
