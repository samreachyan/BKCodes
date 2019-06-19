#include<iostream>
#include<conio.h>
#include<antheader.h>
using namespace std;

string menu[]={"1. Enter to Insert", "2. Enter to View","3. Enter to Search","4. Enter to Update","5. Enter to Delete","6. Enter to Exit"};

int main()
{
	int a=1, i=0,j=0,m=0,k=0;
	for ( int i=0 ; i<6 ; i++)
	if (i==0)
	{
		gotoxy(25,j+=2);
		foreColor(1);
		cout<<"=> "<<menu[i];
	}
	else{
		gotoxy(27, j+=2);
		foreColor(7);
		cout<<""<<menu[i];
	}
	int select =0; 
	while(1){
		char ch= getch();
		if (ch==80)
		{
			select = (select<=5)?select+1:0;
			system("cls");
			for (int i=0 ; i<6; i++)
			{
				if (i==select)
				{
					gotoxy(25,k+=2); foreColor(3);
					cout<<"=> "<<menu[i];
				}
				else{
					gotoxy(27, k+=2);
					foreColor(7);
					cout<<""<<menu[i];
				}
			}
			k=4;
		}
		
		if (ch==72)
		{
			select = (select<=5)?select+1:0;
			system("cls");
			for (int i=0 ; i<6; i++)
			{
				if (i==select)
				{
					gotoxy(25,m+=2); foreColor(3);
					cout<<"=> "<<menu[i];
				}
				else{
					gotoxy(27, m+=2);
					foreColor(7);
					cout<<""<<menu[i];
				}
				
			}
			m=4;
		}
	}
	getch();
}
