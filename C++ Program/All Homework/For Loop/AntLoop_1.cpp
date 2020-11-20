#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>

//int main()
//{
//	int i,sum=0,n;
//	cout<<"S=1+2+3+...+n"<<"\nEnter number of n : ";
//	cin>>n;
//	for ( i=1 ; i<=n ; i++ )
//	{
//		sum+=i;
//	}
//	cout<<"S= "<<sum;
//}


//int main()
//{
//	int i,sum=0,n;
//	cout<<"S=2+4+6+...+2n"<<"\nEnter number of n : ";
//	cin>>n;
//	for ( i=1 ; i<=n ; i++)
//	{
//		sum+=2*i;
//	}
//	cout<<sum;
//}


//int main()
//{
//	int i, sum=0, n;
//	cout<<"S=3+5+7+...+(2n+1)"<<"\nEnter number of n : ";
//	cin>>n;
//	for ( i=1 ; i<=n ; i++)
//	{
//		sum+=2*i+1;
//	}
//	cout<<sum;
//}


//int main()
//{
//	int i,sum1=1,sum2=0,sum=0,n;
//	cout<<"S=1*2*3*...*n +2+4+6+...+2n"<<"\nEnter n : ";
//	cin>>n;
//	for ( i=1 ; i<=n ; i++ )
//	{
//		sum1=sum1*i;
//		sum2+=2*i;
//		//sum2+=2*i+(sum1);
//		sum=sum1+sum2;
//	}
//	cout<<sum1<<"\n"<<sum2<<"\n"<<sum;
//}



//int main()
//{
//	float i,sum=0,n;
//	cout<<"S=1+1/2+1/3+...+1/n"<<"\nEnter n : ";
//	cin>>n;
//	for ( i=1 ; i<=n ; i++ )
//	{
//		sum+=(1/i);
//	}
//	cout<<sum;
//}


//int main()
//{
//	int i,sum=1,result=1,n;
//	cout<<"S=1!*2!*3!*...*n!"<<"\nEnter n :";
//	cin>>n;
//	for ( i=1 ; i<=n ; i++ )
//	{
//		sum*=i;
//		result*=sum;
//	}
//	cout<<result;
//}

int main()
{
	int i,sum=0,n;
	cout<<"S=1^1+2^2+3^3+...+n^n"<<"\nEnter n :";
	cin>>n;
	for ( i=1 ; i<=n ; i++ )
	{
		sum+=pow(i,i);
	}
	cout<<sum;
}



