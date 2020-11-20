#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

string getpass()
{
	string pass;
	char ch=0;
	while ( (ch=getch()) !=13)
	{
		if ( ch==8)
		{
			if (pass.length() != 0)
			{
				cout<<"\b\b";
				pass.resize(pass.length()-1);
			}
		}
		else if (ch==0 || ch==224)
		{
			getch();
			continue;
		}
		else 
		{
			pass += ch;
			cout<<"*";
		}
	}
	cout<<endl;
	return pass;
}

int main()
{
	string name="";
	string password="";
	bool loginSuccess = false;
	cout<<"\t\tWelcome to login Balance!\n";
	do{
		cout<<"\n\nUsername : "; cin>>name;
		cout<<"Password : "; string password = getpass();
		if (name=="samreach"&& password=="12345")
		{
			cout<<"\nSuccessful Login\n\n";
			loginSuccess = true;
		}
		else
		{
			cout<<"Incorrect!! \nTry again";
		}
	}while(!loginSuccess);
	getch();
}
