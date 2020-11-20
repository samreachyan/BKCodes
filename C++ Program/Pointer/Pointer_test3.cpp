#include<iostream>
using namespace std;
#include<conio.h>

//int power( int x, int y)
//{
//	int result=1 ;
//	for ( int i=0 ; i<y ; i++)
//	{
//		result = result * x;
//	}
//	return (result);
//}
//
//int main()
//{
//	back:
//	int a, b;
//	cin>>a>>b;
//	cout<<power(a,b)<<endl;
//	getch();
//	goto back;
//}

/////

int main()
{
//	int x=10;
//	int *p1;
//	p1 = &x;
//	
//	cout<<" P address : "<<p1<<endl; 
//	p1 --;
//	cout<<" P after : "<<p1<<endl;
//	cout<<" P value : "<<*p1<<endl;
	
	
	int numbers[3]={10,30,20}; int *p=numbers;
	cout<<p<<endl;//pointer to the address of the 1st element =>0x28fea4
	cout<<*p<<endl;//1st element =>10
	cout<<*(p+1)<<endl;//2nd element => 30
	cout<<*p +1<<endl;//? 10 +1 =>11
	cout<<*(p+2)<<endl;//3rd element=>20
				
	for(int i=0;i<sizeof(numbers)/sizeof(int);i++)
		cout<<*(p+i)<<endl;

}

