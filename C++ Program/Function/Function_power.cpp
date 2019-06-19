#include<iostream>
using namespace std;
#include<antheader.h>

int fact(int);
int main()
{
	Top:
	cls();
	int n;
	cout<<"*** factoriale  : ";
	cin>>n;
	cout<<fact(n)<<endl;
	getch();
	goto Top;
}

int fact(int x){
	int fact=1;
	
	for (int i=1 ; i<=x; i++)
		fact = fact * i;
	return fact;
}
