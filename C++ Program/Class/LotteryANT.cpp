#include<iostream>
#include<conio.h>
#include<antheader.h>
#include<stdlib.h>
using namespace std;

int main(){
	int num, n; 
	char ch;
	system("mode con: cols=45 line=15");
	do {
		system("cls");
		cout<<"Input your number :"; cin>>num;
		while (!kbhit()){
			
			setcursor(0,true);
			n = rand()%99+1; // rand number
			Beep (3456,50); // make sound
			gotoxy(40, 5);
			cout<<n<<endl;
		}
		gotoxy(37, 7);
		if(num==n)
			cout<<"You won!!!"<<endl;
		else
			cout<<"You lose!!!"<<endl;
		ch=getch();
		getch();
	}while (ch !=27);
}
