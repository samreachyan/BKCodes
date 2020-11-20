#include<iostream>
#include<conio.h>
#include<sstream>
using namespace std;
int main()
{
	
	int a,n=0,ns[100];
	
	while(1) //1 is true condition
	{
		cout<<"Enter number ["<<n<<"] :"; 
		cin>>ns[n];
		if(ns[n]==0)
		{
			break;
		}
		n++;
	}
	cout<<"\n";
	for ( int i=0 ; i<n; i++)
	{
		cout<<ns[i]<<" ";
	}
	
	cout<<"\n";
	string cp="",cn="";

	int max=ns[0],min=ns[0], count1=0,count2=0;
	
	for ( int i=0 ; i<n; i++)
	{
		stringstream s;
		s<<ns[i];
		if ( ns[i]>0)
		{
			cp +=s.str()+ " "; count1++;
		}
		if ( ns[i]<0)
		{
			cn +=s.str()+ " "; count2++;
		}
		if ( ns[i]> max)
		{
			max=ns[i];
		}
		if ( ns[i]<min)
		{
			min=ns[i];
		}
	}
	cout<<"\nPositive number are : "<<cp<<" and : "<<count1<<" times.";
	cout<<"\nNegative number are : "<<cn<<" and : "<<count2<<" times.";
	cout<<"\nMax is "<<max;
	cout<<"\nMin is "<<min;
	getch();
}
