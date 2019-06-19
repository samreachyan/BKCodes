#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 80

void output (char *s);
int stringlength (char *count);
int main()
{
	char s[MAX];
	int nr;
	cout<<"Enter a string : ";
	cin.get(s, MAX, '\n');
	cout<<"Contents of s : "<<endl;
	output(s);
	nr = stringlength(s);
	cout<<endl<<"There are "<<nr<<" characters."<<endl;
}

void output (char *ptr)
{
	while ( *ptr != '\0') // this condition means that string not work when there is nothing in string.
	{
		cout<<*ptr;
		ptr++;
	}
}

int stringlength( char *count)
{
	int i=0; 
	while ( *count != '\0')
	{
		i++;
		count++;
	}
	return i;
}
