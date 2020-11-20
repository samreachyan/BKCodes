#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	back:
	int a[5]={1,2,3,4,5};
	int i,s,j=0,k=0;
	
	cout<<"\n{1,2,3,4,5}";
	cout<<"\nEnter number to delete :"; cin>>s;
	for(i=0 ;i<5 ; i++ )
	{
		if (a[i]==s)
		{
			k=1;
			continue;
		}
		else
		{
			a[j]=a[i];
			j++;
		}
	}
	
	if (k==0)
	{
		cout<<"Not found....!";
	}
	else 
	{
		for(i=0;i<j;i++) 
		{
			cout<<a[i]<<" ";
		}
	}
	getch();
	goto back;
} 