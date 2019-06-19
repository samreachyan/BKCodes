#include<iostream>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
void gotoxy(int x,int y){
	HANDLE hConsoleOutput;
	COORD coord;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(hConsoleOutput,coord);
}
void foreColor(int color)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle,color|FOREGROUND_INTENSITY);		
}
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


int main()
{
	string menu[5]={"Start New","Infomation", "Contact Me", "Option" ,"Exit Program"};
	int pointer = 0;
	setcursor(0,0);
	while(1){
		system("cls");
		foreColor(15);
		cout<<"Main Menu\n\n";
		for ( int i=0 ; i<5 ; i++){
			if ( i== pointer)
			{
				foreColor(11);
				cout<<menu[i]<<endl;
			}
			else{
				foreColor(15);
				cout<<menu[i]<<endl;
			}
		}
		while (1){
			char ch;
			ch=getch();
			if ( ch==72){
				pointer -= 1;
				if ( pointer == -1){
					pointer =4;
				}
				break;
			}
			else if ( ch==80 ){
				pointer +=1;
				if (pointer == 5){
					pointer =0 ;
				}
				break;
			}
			else if ( ch==13){ // key enter
				switch (pointer)
				{
					case 0:
					case 1:
					case 2:
					case 3:
						gotoxy(3,10);
						cout<<"Starting .......  ";
						
						for (int i=3 ; i>=0; i-- )
						{
							delay(1000);
							gotoxy(20,10);
							cout<<i;
						}
						break;
					case 4:
						
						exit(1);
						break;
				}
				break;
			}
		}
	}

}
