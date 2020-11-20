//#include<iostream>
//#include<conio.h>
//#include<dos.h> //download this header file
//using namespace std;
//int main()
//{
//	system("cls");
//	int i=1;
//	while (!khbit())
//	{
//		gotoxy(i, 13);
//		textcolor(+128);
//		cout<<"Welcome C++ Programming";
//		delay(100);
//		i++;
//		if (i>65);
//			i=1;
//		system("cls"); //cant run it now
//	}
//}

#include<stdio.h>
#include<conio.h>
#include<dos.h> //download this header file
#include<windows.h>
#include<stdlib.h>
//using namespace std;
int main()
{

	int i=1;
	while (!khbit())
	{
		gotoxy(i, 13);
		textcolor(+128);
		cprintf("Welcome to RUPP");
		delay(100);
		i++;
		if (i>65);
			i=1;
		system("cls"); //cant run it now
	}
}
