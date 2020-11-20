#include<iostream>
#include<antheader.h>
#include<conio.h>
using namespace std;
int main() 
{
	r:
	cls();
	string n,p;
	int a=0;
	foreColor(5);
	gotoxy(21,6); cout<<"Welcome To Login";
	foreColor(1);
	gotoxy(20,5); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(20,7); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(19,5); cout<<(char)213; //left up
	gotoxy(19,6); cout<<(char)179;
	gotoxy(19,7); cout<<(char)212; //left down
	gotoxy(38,5); cout<<(char)184; //right up
	gotoxy(38,6); cout<<(char)179;
	gotoxy(38,7); cout<<(char)190; //right down
	
	gotoxy(6,6); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(39,6); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(5,7); cout<<(char)186; gotoxy(52,7); cout<<(char)186;
	gotoxy(5,8); cout<<(char)186; gotoxy(52,8); cout<<(char)186;
	gotoxy(5,9); cout<<(char)186; gotoxy(52,9); cout<<(char)186;
	gotoxy(5,10); cout<<(char)186; gotoxy(52,10); cout<<(char)186;
	gotoxy(5,11); cout<<(char)186; gotoxy(52,11); cout<<(char)186;
	gotoxy(5,12); cout<<(char)186; gotoxy(52,12); cout<<(char)186;
	gotoxy(5,13); cout<<(char)186; gotoxy(52,13); cout<<(char)186;
	gotoxy(5,14); cout<<(char)186; gotoxy(52,14); cout<<(char)186;
	gotoxy(5,15); cout<<(char)186; gotoxy(52,15); cout<<(char)186;
	gotoxy(6,16); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(5,6); cout<<(char)201; gotoxy(5,16); cout<<(char)200; // left
	gotoxy(52,6); cout<<(char)187; gotoxy(52,16); cout<<(char)188; // right
	
	foreColor(6);
	gotoxy(10,9); cout<<"Enter username :";
	foreColor(7);
	gotoxy(27,8); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(27,10); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(26,8); cout<<(char)201; //left up
	gotoxy(26,9); cout<<(char)186;
	gotoxy(26,10); cout<<(char)200; //left down
	gotoxy(48,8); cout<<(char)187; //right up
	gotoxy(48,9); cout<<(char)186;
	gotoxy(48,10); cout<<(char)188; //left down
	
	foreColor(6);
	gotoxy(10,12); cout<<"Enter password :";
	foreColor(7);
	gotoxy(27,11); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(27,13); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(26,11); cout<<(char)201; //left up
	gotoxy(26,12); cout<<(char)186;
	gotoxy(26,13); cout<<(char)200; //left down
	gotoxy(48,11); cout<<(char)187; //right up
	gotoxy(48,12); cout<<(char)186;
	gotoxy(48,13); cout<<(char)188; //left down
	
	gotoxy(14,17); cout<<"Made by Y.Samreach (18/07/2017) ";
	
	foreColor(3);
	gotoxy(27,9); cin>>n;
	gotoxy(27,12); cin>>p;
		back1:
	if (n!="samreach" && p=="123")	
	{
		foreColor(2);
		gotoxy(21,14); cout<<"Incorrect Login";
		foreColor(3);
		gotoxy(27,9); cout<<"           ";
		gotoxy(27,9); cin>>n;
		a=a+1;
		if (a==3)
		{
			foreColor(3);
			gotoxy(15,14); cout<<"It isn't your account!! exit>>";
			getch();
			exit(0);
		}
		goto back1;
	}
	if (n=="samreach" && p!="123")	
	{
		foreColor(2);
		gotoxy(21,14); cout<<"Incorrect Login";
		foreColor(3);
		gotoxy(27,12); cout<<"           ";
		gotoxy(27,12); cin>>p;
		a=a+1;
		if (a==3)
		{
			foreColor(3);
			gotoxy(15,14); cout<<"It isn't your account!! exit>>";
			getch();
			exit(0);
		}
		goto back1;
	}
	if (n=="samreach" && p=="123")
	{
		foreColor(2);
		gotoxy(21,14); cout<<"Successful Login";
	back2:
	cls();
	int choice;
  	float A,B,C=0;
  	foreColor(3);
	cout<<"\n\n1. Addition\n";
	cout<<"2. Substraction\n";
	cout<<"3. Multiplication\n";
	cout<<"4. Division\n";
	cout<<"5. Log out\n";
	cout<<"6. Quit\n";
	foreColor(7);
	cout<<"------------------------\n\n";
	foreColor(5);
	cout<<"Enter your choice <from 1-5> : ";
	foreColor(6); cin>>choice; cout<<"\n";
	
	switch (choice)
		{
		case 1:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A+B;
			cout<<"C= "<<C;
			getch();
			goto back2; // here in the program used (break;) to break the code and run again.
		case 2:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A-B;
			cout<<"C= "<<C;
			getch();
			goto back2;
		case 3:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A*B;
			cout<<"C= "<<C;
			getch();
			goto back2;
		case 4:
			cout<<"Enter value A: "; cin>>A;
			cout<<"Enter value B: "; cin>>B;
			C=A/B;
			cout<<"C= "<<C;
			getch();
			goto back2;
		case 5:
			foreColor(5);
			cout<<"You've loged out the program!!  ";
			foreColor(1);
			cout<<">>Enter";
			getch();
			goto r;
		case 6:
			cout<<"Exiting the program!!";
			exit(0);
		default:
			cout<<"Invalid choice.";
			getch();
			goto back2;
		}	
	}
	else
	{
		foreColor(4);
		gotoxy(21,14); cout<<"Incorrect Login";
		foreColor(3);
		gotoxy(27,9); cout<<"           ";
		gotoxy(27,12); cout<<"           ";
		gotoxy(27,9); cin>>n;
		gotoxy(27,12); cin>>p;
		a=a+1;
		if (a==3)
		{
			foreColor(3);
			gotoxy(15,14); cout<<"It isn't your account!! exit>>";
			getch();
			exit(0);
		}
		goto back1;
	}
}
