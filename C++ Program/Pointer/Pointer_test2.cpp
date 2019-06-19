#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	Top:
	system("cls");
	int i,n, a[20], *p, max, min;
	p=a;
	cout<<"Enter n number: ";
	cin>> n;
	if (n<=0 || n>=20)
	{
		goto Top;
	}
	for (i=0 ; i<n ; i++)
	{
		cout<<" P ["<<i<<"] is "; 
		cin>>*(p+i);
	}
	cout<<"\n";
	for (i=0 ; i<n ; i++)
	{
		cout<<*(p+i)<<endl;
	}
	max=*p;
	min=*p;
	for (i=0 ; i<n ; i++)
	{
		if ( max<*(p+i))
		{
			max=*(p+i);
		}
		else
		{
			min=*(p+i);
		}
	}
	cout<<"Max is "<<max<<endl<< "Min is "<<min;
}

