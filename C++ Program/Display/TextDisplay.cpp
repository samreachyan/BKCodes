#include <windows.h>
#include <iostream>
using namespace std;
#include<antheader.h>

int main()
{
	string word;
	
	foreColor(2);
	gotoxy( 5, 3);
	cout<<"**** Free Text Animations here ****";
	gotoxy( 5, 4);
	foreColor(5);
	cout<<"Enter your words : "; 
	foreColor(6);
	getline(cin,word);
	
	int n=word.length();
	
	for ( int i=0 ; i<n ; i++)
	{
		
//				gotoxy( 5, 3);
//				cout<<"**** Free Text Animations here ****";
//				gotoxy( 5, 4);
//				cout<<"Enter your words : " <<word; 
		
		foreColor(i);
		gotoxy ( 30+i ,8);
		cout<<word[i];
		delay(100);
		
		if ( i>=n-1)
		{
			cls();
			
//				gotoxy( 5, 3);
//				cout<<"**** Free Text Animations here ****";
//				gotoxy( 5, 4);
//				cout<<"Enter your words : " <<word; 
				
			for ( int j=n-1 ; j>=0 ; j--)
			{
				foreColor(j);
				gotoxy( 30+j , 8);
				cout<<word[j];
				delay(100);
			}
			i=-1;
			cls();
		}
		
	}
	getch();
	
}
