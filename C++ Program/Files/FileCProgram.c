#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<antheader.h>
#define clrscr() system("cls")

class MyClass{
	public :
		char id[6], name[20];
		int age;
} myClass ;

FILE *myFile;
FILE *myTemp;

char myText[]="Text.txt";
char myTempText[]="TempText.txt";

void formMain();
void insert();
void view();
void update();
void search();
void Delete();

void main(){
	formMain();
	getch();
}
void formMain(){
	r:
		clrscr();
	char opt;
	printf("1.	Insert\n");
	printf("2.	View\n");
	printf("3.	Update\n");
	printf("4.	Search\n");
	printf("5.	Delete\n");
	scanf("%c" ,&opt);
	switch (opt){
		case '1':
			insert();
			break;
		case '2':
			view();
			break;
		case '3':
			update();
			break;
		case '4':
			search();
			break;
		case '5':
			Delete();
			break;
		default:
			r:
				cin.clear();
				cin.ignore();
				printf("Invalid ...");
				getch();
				break;
	}
}
