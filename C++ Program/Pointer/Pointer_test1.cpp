#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
//	int x, y, *px, *py, t;
//	x=3; y=15;
//	px=&x; py=&y;
//	cout<<"The address of "<<x<<" is "<<px;
//	cout<<"\nThe address of "<<y<<" is "<<py;
//	t=x;
//	*px=y;
//	*py=t;
//	cout<<"\nNew value of "<<x;

/*Find max and min */

//int x,y, *px, *py;
//int max, min;
//
//px=&x; py=&y;
//cout<<"Input x: "; cin>>x;
//cout<<"Input y: "; cin>>y;
//
//if (*px>*py)
//{
//	max=*px;
//	min=*py;
//}
//else {
//	max=*py;
//	min=*px;
//}
//cout<<"Max is "<<max<< " and Min is ";
	
	
//	int a[3]={1,2,4};
//	int *p =&a[0];
//	
//	
//	cout<<p<<endl;
//	cout<<a<<endl<<endl<<endl;
//	
//	cout<<&a[0]<<endl;
//	cout<<&a[1]<<endl;
//	cout<<&a[2]<<endl;
//	cout<<&a[3]<<endl<<endl<<endl;
//	
//	cout<<*a<<endl;
//	cout<<*(a+1)<<endl;
//	cout<<*(a+2)<<endl;
	
	
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p, i=0;
	p=a;
	for (i=0 ; i<10 ; i++)
	{
		cout<<*(p+i)<<endl;
	}
	
}
