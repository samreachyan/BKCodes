#include<iostream>
#include<antheader.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	r:
	int a,b,t=0;
	system("cls");
	gotoxy(14,16); cout<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220;
	//gotoxy(14,18); cout<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220<<(char)220;	
	gotoxy(14,18); cout<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223<<(char)223;
	gotoxy(14,17); cout<<(char)221; gotoxy(47,17); cout<<(char)222;
	gotoxy(15,17); cout<<"This program made by Y.Samreach!";
	
	gotoxy(25,3);
	cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(24,3);	cout<<(char)201; //up left
	
	gotoxy(24,4);cout<<(char)179;
	gotoxy(24,5);	cout<<(char)200; //under left
	
	gotoxy(36,4);
	cout<<(char)179;
	gotoxy(36,3);	cout<<(char)187; //up right
	gotoxy(36,5);	cout<<(char)188; //under right
	
	gotoxy(26,4);
	cout<<"Calculator";
	
	gotoxy(25,5);
	cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	
	//culumn up
	gotoxy(10,4);
	cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(37,4);
	cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	
	//culumn down
	gotoxy(10,15);
	cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196
	<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	
	//row left
	gotoxy(9,5); cout<<(char)179;
	gotoxy(9,6); cout<<(char)179;
	gotoxy(9,7); cout<<(char)179;
	gotoxy(9,8); cout<<(char)179;
	gotoxy(9,9); cout<<(char)179;
	gotoxy(9,10); cout<<(char)179;
	gotoxy(9,11); cout<<(char)179;
	gotoxy(9,12); cout<<(char)179;
	gotoxy(9,13); cout<<(char)179;
	gotoxy(9,14); cout<<(char)179;

	
	//row right
	gotoxy(51,5);	cout<<(char)179;
	gotoxy(51,6); cout<<(char)179;
	gotoxy(51,7); cout<<(char)179;
	gotoxy(51,8); cout<<(char)179;
	gotoxy(51,9); cout<<(char)179;
	gotoxy(51,10); cout<<(char)179;
	gotoxy(51,11); cout<<(char)179;
	gotoxy(51,12); cout<<(char)179;
	gotoxy(51,13); cout<<(char)179;	
	gotoxy(51,14); cout<<(char)179;	
	
	gotoxy(9,4);
	cout<<(char)201; //up left big
	gotoxy(9,15);
	cout<<(char)200; //under left big
	gotoxy(51,4);
	cout<<(char)187; //up right
	gotoxy(51,15);
	cout<<(char)188; //under right
	
	gotoxy(15,7);
	cout<<"Enter Number a: ";
	gotoxy(15,10);
	cout<<"Enter Number b: ";
	gotoxy(15,13);
	cout<<"Your Total a+b= ";	
	//the 1st box
	gotoxy(34,6);cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(34,8);cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(33,7); cout<<(char)179; gotoxy(47,7); cout<<(char)179; //staight
	gotoxy(33,6); cout<<(char)218; //all are arround
	gotoxy(33,8); cout<<(char)192;
	gotoxy(47,6); cout<<(char)191;
	gotoxy(47,8); cout<<(char)217;
	//the 2nd box
	gotoxy(34,9);cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(34,11);cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(33,10); cout<<(char)179; gotoxy(47,10); cout<<(char)179; //staight
	gotoxy(33,9); cout<<(char)218; //all are arround
	gotoxy(33,11); cout<<(char)192;
	gotoxy(47,9); cout<<(char)191;
	gotoxy(47,11); cout<<(char)217;
	//the 3rd box
	gotoxy(34,12);cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(34,14);cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(33,13); cout<<(char)179; gotoxy(47,13); cout<<(char)179; //staight
	gotoxy(33,12); cout<<(char)218; //all are arround
	gotoxy(33,14); cout<<(char)192;
	gotoxy(47,12); cout<<(char)191;
	gotoxy(47,14); cout<<(char)217;
	
	
	gotoxy(35,7); cin>>a;
	
	gotoxy(35,10); cin>>b;
	
	t=a+b;
	
	gotoxy(35,13); cout<<t;
		
	getch();
	goto r;
}
