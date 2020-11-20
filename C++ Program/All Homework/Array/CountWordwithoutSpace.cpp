#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	r:
	string word;
	int i,n=0;
	cout<<"Enter word : ";
	getline(cin,word);
	for ( i=0 ; word[i]!='\0' ;i++ )
	{
//		if (word[i]==32)
//		{
//			continue;
//		}
		n++;
	}
	cout<<"There are "<<n;
	goto r;
}
