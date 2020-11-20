#include<iostream>
#include<conio.h>
#include<antheader.h>
#include<windows.h>
#include<iomanip>
using namespace std;

int main()
{
	string menu[]={ "1. Create new","2. Add info","3. Update info","4. Delete info","5. Search info","6. Exit"};
	system("mode con: cols=80 lines=30");
	int n=sizeof(menu)/sizeof(string);
	int y=0 , x=40;
	int i=0 , press=0, count_y=0;
	y=1;
	foreColor(40);
	for (int i=0 ; i<2*(n+1) ; i++)
	{
		//foreColor(5);
		gotoxy ( x-11 , y+1);
		cout<<"                                     ";
		y++;
	}
	y=1;
	foreColor(18);
	for (int i=0 ; i<2*(n+1) ; i++)
	{
		//foreColor(6);
		gotoxy ( x-10 , y);
		cout<<"                                     ";
		y++;
	}
	foreColor(20);
	gotoxy(x-1, 1); cout<<"***Add information student***";
	y=3;
	//show menu
	foreColor(18);
	for ( int i=0 ; i<n; i++)
	{
		gotoxy (x,y); 
		cout<<menu[i];
		y+=2;
	}
	count_y=y-2;
	y=3;
	//selete menu
	while(1)
	{
		if (press==i)
		{
			foreColor(1);
			gotoxy(x-5, y);
			cout<<"=>";
			gotoxy(x,y);
			cout<<menu[i];
		}
	}
	switch( getch())
	{
		case 80:
			foreColor (8);
			gotoxy(x-5, y);
			cout<<"  ";
			gotoxy( x,y);
			cout<<menu[i];
			i++;
			if (i>=n)
			{
				i=0;
			}
			y+=2;
			if(y>count_y)
			{
				y=3;
			}
			press++;
			if(press>=n)
			{
				press=0;
			}
			break;
		case 72:
			foreColor (18);
			gotoxy(x-5, y);
			cout<<"    ";
			gotoxy( x,y);
			cout<<menu[i];
			i--;
			if (i<0)
			{
				i=n-1;
			}
			y-=2;
			if(y<3)
			{
				y=count_y;
			}
			press--;
			if(press<0)
			{
				press=n-1;
			}
			break;
	}
}
