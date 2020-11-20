#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

void box( int x, int y, int w, int h , int bgcolor);
void setColor(int color);
void gotoxy(int x, int y);

int main()
{
	system("mode con: cols=60 lines=35");
	box(10,5,40,20,55);
	setColor(15);
	gotoxy(25,6);
	cout<<"Hello World";
	getch();
}

void gotoxy( int x, int y)
{
	COORD coord = { x,y};
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, coord);
}

void setColor(int color)
{
	HANDLE color_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color_handle, color|FOREGROUND_INTENSITY);
}

void box(int x, int y, int w, int h, int bgcolor)
{
	setColor(bgcolor);
	for (int i=0 ; i<w ; i++)
	{
		gotoxy(x+i , y);
		cout<<(char)205;
		gotoxy( i +x, y+h+1);
		cout<<(char)205;
	}
	for (int i=0 ; i<h ; i++)
	{
		gotoxy( x-1, y+i+1);
		cout<<(char)186;
		gotoxy(x+w, y+i+1);
		cout<<(char)186;
	}
	gotoxy(x-1, y);
	cout<<(char)201;
	gotoxy(x+w, y);
	cout<<(char)187;
	gotoxy(x-1, y+1+h);
	cout<<(char)200;
	gotoxy(x+w, y+h+1);
	cout<<(char)188;
	
	for (int i =0 ; i<h ; i++)
		for (int j=0 ; j<w; j++ )
		{
			gotoxy(x+j , y+i+1); cout<<" ";	
		}
}
