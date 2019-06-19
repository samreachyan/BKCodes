#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include<antheader.h>
using namespace std;

int main(){
	start:
		system("cls");
	char ch;
	int count=0;
	string st;
	string str1[3]={
			"Welcome to Samreach Testing",
			"Now i want to go home for this moment",
			"Can you help now? I love someone but I"
					};
	for( int i=0 ; i<3 ; i++){
		st=str1[i];
		foreColor(9);
		gotoxy(20,6);	cout<<str1[i];
		
		foreColor(2);
		gotoxy(15, 3);
		cout<<"You WRONG = "<<count;
		
		for( int j=0 ; j<st.length(); j++){
			gotoxy(20+j,6);
			stringstream s;
			ch=getch();
			s<<ch;
			if ( str1[i].substr(j,1) == s.str()){
				foreColor(7);
				gotoxy(20+j, 6);
				cout<<str1[i].substr(j,1);
				// substr(index_string, distance)
				
			}
			else{
				foreColor(4);
				gotoxy(20+j,6);
				cout<<str1[i].substr(j,1);
				Beep(2897,200);
				count++;
				foreColor(2);
				gotoxy(15, 3);
				cout<<"You WRONG = "<<count;
			}
		}
	}
	
	char ask;
	gotoxy(20,8);
	cout<<"Do you want to play again? (Y/N) : ";
	cin>>ask;
	if (ask=='Y' || ask=='y')
		goto start;
	else
		exit(0);
}
