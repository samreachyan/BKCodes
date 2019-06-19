#include<iostream>
using namespace std;
#include<string.h>
#include<conio.h>
int main()
{
	string word;
	int i,n=0,j;
	cout<<"Enter the word :";
	fflush(stdin);
	getline(cin,word);
	
	for ( i=0 ; word[i]!='\0'; i++ )
	{
		n++;
	}
	cout<<"Alternative word >>:";
	for ( j=n ;j>=0 ;j--)
	{
		cout<<word[j];
	}
	getch();
}
