#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>

int main()
{
	int i,n,num,sum=0;
	float avg=0;
	cout<<"Input value n: ";
	cin>>n;
	for (i=1 ; i<=n ; i++)
	{
		cout<<"Input of number "<<i<<" : ";
		cin>>num;
		sum=sum+num;
	}
	avg=sum/n;
	
	cout<<"So sum = "<<sum<<"\n"<<"So avg = "<<avg;
	getch();
}

