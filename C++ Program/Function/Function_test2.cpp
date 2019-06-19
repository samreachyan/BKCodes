#include<iostream>
using namespace std;

//int max(int, int);
//int main()
//{
//	int a;
//	int b;
//	int ret;
//	cout<<"********* Find max"<<endl;
//	cout<<"Enter a : ";cin>>a;
//	cout<<"Enter b : "; cin>>b;
//	ret=max(a,b);
//	cout<<"The max is "<<ret;
//	return 0;
//}
//int max(int num1, int num2)
//{
//
//	if (num1>num2)
//	{
//		return num1;
//	}
//	
//	else 
//	{
//		return num2;
//	}
//}


//void swap(int &x, int &y)
//{
//	int t;
//	t=x;
//	x=y;
//	y=t;
//	
//}
//int main()
//{
//	int a=30;
//	int b=20;
//	
//	cout<<"Before swap a : "<<a<<endl;
//	cout<<"Before swap b : "<<b<<endl;
//	
//	swap(a,b);
//	cout<<"After swap a: "<<a<<endl;
//	cout<<"After swap b: "<<b<<endl;
//}


	
//int sumnr(int, int);
//int main()
//{
//	int a=10,b=20;
//	int result;
//	sumnr(a,b);
//	cout<<" The result is "<<sumnr(a,b);
//}
//int sumnr(int x, int y)
//{
//	
//	return (x+y);
//}

//   This called by value......
int cal(int a);
int main()
{
	int a =20;
	a = cal(a);
	cout<<a;
}
int cal(int a)
{
	a = a +10;
	return a;
}
