#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	string word="helloworld";
	char wd;
	int i, n=0;
	cout<<"helloworld";
back:
	cout<<"\nEnter the character : ";
	cin>>wd;
	for ( i=0 ; word[i]!='\0' ;i++ )
	{
		if ( word[i]==wd )
		{
			n++;
		}
	}
	cout<<"So the character "<<wd<<" is number : "<<n;
	goto back;
}
