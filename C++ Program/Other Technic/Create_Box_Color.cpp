#include<iostream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void setcursor(bool visible, DWORD size);
void box(int x, int y, int w, int h, int bgcolor);
void setColor(int color);
void gotoxy(int x, int y);

int main()
{
	system("mode con: cols=90 lines=35");
	box(10,5,40,20,55);
	setcursor(0,0);
	setColor(15); gotoxy (0,30); getch();
}

// set cursor
void setcursor(bool visible, DWORD size)
{
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	if(size == 0)
	{
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width
	}
	CONSOLE_CURSOR_INFO lpCursor;	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console,&lpCursor);
}
//start gotoxy
void gotoxy(int x, int y)
{
	COORD coord = {x,y};
	HANDLE output = GetStdHandle (STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(output, coord);
}
//setcolor
void setColor(int color)
{
	HANDLE color_handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color_handle, color|FOREGROUND_INTENSITY);
}
//START 
void box (int x, int y , int w, int h, int bgcolor)
{
	setColor(bgcolor);
	for (int i=0 ; i<w; i++)
	{
		gotoxy(x+i,y); cout<<(char)205;
		gotoxy(x+i, y+h+1); cout<<(char)205;
	}
	for ( int i=0 ; i<h ; i++)
	{
		gotoxy(x-1,y+i+1);	cout<<(char)186;
		gotoxy(x+w,y+i+1);	cout<<(char)186;
	}
	gotoxy(x-1 , y); cout<<(char)201;
	gotoxy(x+w, y); cout<<(char)187;
	gotoxy(x-1,y+h+1); cout<<(char)200;
	gotoxy(x+w , y+h+1); cout<<(char)188;
	
	for (int i=0 ; i<h; i++){
		for (int j=0 ; j<w; j++){
		//	setColor(bgcolor); // bgcolor
			gotoxy(x+j ,y+i+1); cout<<" ";
		}
	}
}
