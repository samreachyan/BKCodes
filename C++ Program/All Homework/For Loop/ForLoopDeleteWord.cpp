#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	string word;
	int n;
	cout<<"Enter the word : ";
	fflush(stdin);
	getline(cin,word);
	//cout<<"Enter the number to delete : "; cin>>n;
	
	cout<<word.erase(0,1);
	
	/*
	for (int i=0 ; word[i]!='\0' ; i++)
	{
		if ( word[i]==word[n] )
		{
			continue;
		}
		
		cout<<word[i];
	} */
}
