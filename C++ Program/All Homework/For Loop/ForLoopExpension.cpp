#include<iostream>
using namespace std;
#include<math.h>
#include<conio.h>
#include<antheader.h>

//int main()
//{
//	int a,b,d=0,n;
//	cout<<"Enter n : ";
//	cin>>n;
//	for (a=1, b=n ; a<=n && b>=1 ; a++, b--)
//	{
//		d=a+b;
//		cout<<a<<" + "<<b<<" = "<<d<<"\n";
//	}
//}


//int main()
//{
//	int i,j,m,s,t,n;
//	cout<<"Enter m : "; cin>>m;
//	cout<<"Enter s : "; cin>>s;
//	for ( j=0 ; j<=s ; j++)
//	{
//		i=pow(m,j);
//		cout<<m<<" ^ "<<j<<" = "<<i<<"\n";
//	}
//	getch();
//}


int main()
{
	back:
	cls();
	int i,a,b,n;
	cout<<"Enter n : "; cin>>n;
	cout<<"\nOdd\tEven\n";
	for ( i=1 ; i<=n ; i++ )
	{
		if (i%2!=0) //number seis odd
		{
			cout<<i<<"\t";
		}
		else 
		{
			cout<<i<<"\n";
		}
	}
	getch();
	goto back;
}
