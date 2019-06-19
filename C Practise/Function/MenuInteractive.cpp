#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
const int N=5;

void foreColor(int color)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle,color|FOREGROUND_INTENSITY);		
}

int main()
{
	system("cls");
	int i;
	int select = 0 ;
	string menu[N]={"Start Game","Option", "Information","Contact Me", "Exit Programe"};
	//setcursor(0,0);
	
	for (i=0 ; i<N; i++){
		if ( i==0 ){
			foreColor(4);
			cout<<menu[i]<<endl;
		}
		else{
			foreColor(6);
			cout<<menu[i]<<endl;
		}
	}
	while(1){
		char ch;
		ch=getch();
		// key down
		if ( ch == 80){
			select= ( select<5 )? select+1 : 0 ;
				system("cls");
			for ( i=0 ; i<N ; i++){
				if (i==select){
					foreColor(4);
					cout<<menu[i]<<endl;
				}
				else{
					foreColor(6);
					cout<<menu[i]<<endl;
				}
			}
		}
		// key up
		if ( ch == 72){
			select= ( select >0 )? select-1 : 4 ;
				system("cls");
			for ( i=0 ; i<N ; i++){
				if (i==select){
					foreColor(4);
					cout<<menu[i]<<endl;
				}
				else{
					foreColor(6);
					cout<<menu[i]<<endl;
				}
			}
		}
	}
}
