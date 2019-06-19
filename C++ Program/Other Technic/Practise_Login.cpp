#include<iostream>
#include<conio.h>
#include<string>
#include<antheader.h>
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
				cout<<"\b \b";
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
	back:
	system("cls");
	string username;
	
	gotoxy( 3, 6); cout<<"Enter Username :";
	gotoxy( 3, 8); cout<<"Enter Password :";
	for (int i=20 ; i<40 ; i++){
		gotoxy (i , 5) ;cout<<(char)196;
		gotoxy (i , 7); cout<<(char)196;
		gotoxy (i , 9) ;cout<<(char)196;
	}
	for ( int i=6 ; i<9 ; i++){
		gotoxy (19, i); cout<<(char)179;
		gotoxy (40, i); cout<<(char)179;
	}
	gotoxy (19, 5); cout<<(char)218;
	gotoxy (40, 5); cout<<(char)191;
	gotoxy (19, 7); cout<<(char)195;
	gotoxy (40, 7); cout<<(char)180;
	gotoxy (19 ,9); cout<<(char)192;
	gotoxy (40 ,9); cout<<(char)217;
	
	gotoxy (25, 6); cin>>username;
	gotoxy (25, 8); string password=getpass();
	
	if ( username =="samreach" && password =="12345")
	{
		gotoxy (20 , 11); cout<<"##### corrected #####";
	}
	else 
	{
		gotoxy (20 , 11); cout<<"##### incorrected #####";
	}
	
	getch();
	goto back;
	
}
