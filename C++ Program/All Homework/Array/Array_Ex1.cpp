#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string>
#include<conio.h>
#include<antheader.h>

string student[100][3];
int nr=0;

int main()
{
	int a;
	Top:
	system("cls");
	cout<<"*** Student information ***\n\n";
	cout<<"1. Add information student\n"
		<<"2. View information student \n\n"
		<<"Enter option: "; 
	cin>>a;
	switch(a)
	{
		case 1:
			
			do {
				system("cls");
				cout<<"Add your information\n\n";
				cout<<"Enter ID: "; cin>>student[nr][0];
				cout<<"Enter Name: "; cin>>student[nr][1];
				cout<<"Enter Sex: "; cin>>student[nr][2];
				cout<<"Enter Phone: "; cin>>student[nr][3];
				nr++;
				cout<<"Click esp>>Exit";
			}while (getch() != 27);
			goto Top;
			break;
			
		case 2:
			cls();
			cout<<"View information\n\n";
			cout<<"ID\tName\tSex\tPhone Number\n"
			<<"=====================================\n";
			for (int i=0 ; i<nr ; i++)
			{
				cout<<student[i][0]<<"\t"<<student[i][1]<<"\t"<<student[i][2]<<"\t"<<student[i][3]<<"\n";
			}
			system("pause");
			goto Top;
			break;
	}
}
