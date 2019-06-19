#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	string word;
	char wd;
	int i,n=0;
	cout<<"Enter the world : ";
	fflush(stdin);
	getline(cin,word);
back:
	cout<<"\nEnter the character : "; 
	cin>>wd; cout<<"\n";
	for ( i=0 ; word[i]!='\0' ;i++ )
	{
		if (word[i]==wd)
		{
			cout<<"My character is "<<wd<<" in number "<<i<<" of the world.\n";
		}
	}
	goto back;
}
