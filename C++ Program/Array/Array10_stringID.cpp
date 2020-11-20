#include<iostream>
#include<conio.h>
#include<string>
#include<antheader.h>
using namespace std;

string id[100],name[100],sex[10];
float C[10],Cpp[10],Csh[10],sum=0, avg[100];	
int inc=0;

string getpass()
{
	string pass;
	char ch=0;
	while ( (ch=getch()) !=13)
	{
		if ( ch==8)
		{
			if (pass.length() != 0)
			{
				cout<<"\b\b";
				pass.resize(pass.length()-1);
			}
		}
		else if (ch==0 || ch==224)
		{
			getch();
			continue;
		}
		else 
		{
			pass += ch;
			cout<<"*";
		}
	}
	cout<<endl;
	return pass;
}

int main()
{
	back:
	cls();
	string n;
	int a=0;
	foreColor(5);
	gotoxy(21,6); cout<<"Welcome To Login";
	foreColor(1);
	gotoxy(20,5); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(20,7); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(19,5); cout<<(char)213; //left up
	gotoxy(19,6); cout<<(char)179;
	gotoxy(19,7); cout<<(char)212; //left down
	gotoxy(38,5); cout<<(char)184; //right up
	gotoxy(38,6); cout<<(char)179;
	gotoxy(38,7); cout<<(char)190; //right down
	
	gotoxy(6,6); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(39,6); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(5,7); cout<<(char)186; gotoxy(52,7); cout<<(char)186;
	gotoxy(5,8); cout<<(char)186; gotoxy(52,8); cout<<(char)186;
	gotoxy(5,9); cout<<(char)186; gotoxy(52,9); cout<<(char)186;
	gotoxy(5,10); cout<<(char)186; gotoxy(52,10); cout<<(char)186;
	gotoxy(5,11); cout<<(char)186; gotoxy(52,11); cout<<(char)186;
	gotoxy(5,12); cout<<(char)186; gotoxy(52,12); cout<<(char)186;
	gotoxy(5,13); cout<<(char)186; gotoxy(52,13); cout<<(char)186;
	gotoxy(5,14); cout<<(char)186; gotoxy(52,14); cout<<(char)186;
	gotoxy(5,15); cout<<(char)186; gotoxy(52,15); cout<<(char)186;
	gotoxy(6,16); cout<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205<<(char)205;
	gotoxy(5,6); cout<<(char)201; gotoxy(5,16); cout<<(char)200; // left
	gotoxy(52,6); cout<<(char)187; gotoxy(52,16); cout<<(char)188; // right
	
	foreColor(6);
	gotoxy(10,9); cout<<"Enter username :";
	foreColor(7);
	gotoxy(27,8); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(27,10); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(26,8); cout<<(char)201; //left up
	gotoxy(26,9); cout<<(char)186;
	gotoxy(26,10); cout<<(char)200; //left down
	gotoxy(48,8); cout<<(char)187; //right up
	gotoxy(48,9); cout<<(char)186;
	gotoxy(48,10); cout<<(char)188; //left down
	
	foreColor(6);
	gotoxy(10,12); cout<<"Enter password :";
	foreColor(7);
	gotoxy(27,11); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;
	gotoxy(27,13); cout<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196<<(char)196;	
	gotoxy(26,11); cout<<(char)201; //left up
	gotoxy(26,12); cout<<(char)186;
	gotoxy(26,13); cout<<(char)200; //left down
	gotoxy(48,11); cout<<(char)187; //right up
	gotoxy(48,12); cout<<(char)186;
	gotoxy(48,13); cout<<(char)188; //left down
	
	gotoxy(14,17); cout<<"Made by Y.Samreach (18/07/2017) ";
	
	foreColor(3);
	gotoxy(27,9); cin>>n;
	gotoxy(27,12); string p=getpass();
		back1:
	if (n!="samreach" && p=="123")	
	{
		foreColor(2);
		gotoxy(21,14); cout<<"Incorrect Login";
		foreColor(3);
		gotoxy(27,9); cout<<"           ";
		gotoxy(27,9); cin>>n;
		a=a+1;
		if (a==3)
		{
			foreColor(3);
			gotoxy(15,14); cout<<"It isn't your account!! exit>>";
			getch();
			exit(0);
		}
		goto back1;
	}
	if (n=="samreach" && p!="123")	
	{
		foreColor(2);
		gotoxy(21,14); cout<<"Incorrect Login";
		foreColor(3);
		gotoxy(27,12); cout<<"           ";
		gotoxy(27,12); string p = getpass();
		a=a+1;
		if (a==3)
		{
			foreColor(3);
			gotoxy(15,14); cout<<"It isn't your account!! exit>>";
			getch();
			exit(0);
		}
		goto back1;
	}
	if (n=="samreach" && p=="123")
	{
		foreColor(2);
		gotoxy(21,14); cout<<"Successful Login";
		getch();
		
	//--------------------------------------------------------------- new login system
	
		r:
	cls();
	int n=100, i=0 ,j=0 ,f=0;
	string ids, choose;
	int min=avg[0], max=avg[0];
	foreColor(3);
	cout<<"\n1. Add info students."
	<<"\n2. View info students."
	<<"\n3. Search id students."
	<<"\n4. Update info students."
	<<"\n5. Delete info students."
	<<"\n6. Find max score."
	<<"\n7. Find min score."
	<<"\n8. Quite"
	<<"\n\nEnter Option>>"; cin>>n;
	switch(n)
	{
		case 1: 
			cls();
			do
			{
				cls();
				cout<<"\nEnter ID: "; cin>>id[inc];
				cout<<"Enter Name: "; cin>>name[inc];
				cout<<"Enter Sex: "; cin>>sex[inc];
				cout<<"Enter score C: "; cin>>C[inc];
				cout<<"Enter score Cpp: "; cin>>Cpp[inc];
				cout<<"Enter score Csh: "; cin>>Csh[inc];
				sum=(C[inc]+Cpp[inc]+Csh[inc]);
				cout<<"\nTotal :"<<sum;
				avg[inc]=sum/3;
				cout<<"\nAverage :"<<avg[inc];
				inc++;
				cout<<"\n\nClick 'esc' to leave>>";
			}while(getch()!=27);
			goto r;
			break;
		case 2:
			cls();
			cout<<"ID\tName\tSex\tC\tCpp\tCsh\tAverage\n";
			foreColor(2);
			for ( i=0 ; i<inc; i++)
			{
					cout<<id[i];
					cout<<"\t"<<name[i];
					cout<<"\t"<<sex[i];
					cout<<"\t"<<C[i];
					cout<<"\t"<<Cpp[i];
					cout<<"\t"<<Csh[i]<<"\t"<<avg[i]<<"\n";
			}
			cout<<"Auto back...";
			getch();
			goto r;
			break;
		case 3:
			top:
			cls();
			cout<<"Search ID :"; cin>>ids;
			cout<<"\nID\tName\tSex\tC\tCpp\tCsh\tAverage\n";
			for ( i=0 ; i<inc; i++)
			{
				foreColor(4);
				if (ids==id[i])
				{
					cout<<id[i];
					cout<<"\t"<<name[i];
					cout<<"\t"<<sex[i];
					cout<<"\t"<<C[i];
					cout<<"\t"<<Cpp[i];
					cout<<"\t"<<Csh[i]<<"\t"<<avg[i]<<"\n";
				}
			}
			foreColor(6);
			cout<<"\nDo you want to search again? (Y/N): "; cin>>choose;
				if (choose=="Y"|| choose=="y")
				{
					goto top;
				}
			goto r;
			break;
		case 4:
			cls();
			cout<<"You can update info student"<<"\nSearch ID :"; cin>>ids;
			cout<<"\nID\tName\tSex\tC\tCpp\tCsh\tAverage\n";
			for ( i=0 ; i<inc; i++)
			{
				foreColor(4);
				if (ids==id[i])
				{
					f=1;
					cout<<id[i];
					cout<<"\t"<<name[i];
					cout<<"\t"<<sex[i];
					cout<<"\t"<<C[i];
					cout<<"\t"<<Cpp[i];
					cout<<"\t"<<Csh[i]<<"\t"<<avg[i]<<"\n";
				}
				if (ids==id[i])
				{
					foreColor(6);
					cout<<"\n\nEnter ID: "; cin>>id[i];
					cout<<"Enter Name: "; cin>>name[i];
					cout<<"Enter Sex: "; cin>>sex[i];
					cout<<"Enter score C: "; cin>>C[i];
					cout<<"Enter score Cpp: "; cin>>Cpp[i];
					cout<<"Enter score Csh: "; cin>>Csh[i];
					cout<<"\nYou've Done...";
				}
			}
			if (f==0)
			{
				cout<<"\nNot found...";
			}
			getch();
			goto r;
			break;
			
		case 5: //delete
			cls();
			cout<<"You can delete info student"<<"\nSearch ID :"; cin>>ids;
			cout<<"\nID\tName\tSex\tC\tCpp\tCsh\tAverage\n";
			for ( i=0 ; i<inc; i++)
			{
				if (ids==id[i])
				{
					foreColor(4);
					cout<<id[i];
					cout<<"\t"<<name[i];
					cout<<"\t"<<sex[i];
					cout<<"\t"<<C[i];
					cout<<"\t"<<Cpp[i];
					cout<<"\t"<<Csh[i]<<"\t"<<avg[i]<<"\n";
					cout<<"\n\nDelete? (Y/N): "; cin>>choose;
					if (choose=="Y"||choose=="y")
					{
						f=1;
						continue;
					}
					else
					{
						cout<<"Auto back...>>";
						getch();
						goto r;
					}
				}
				else 
				{
					id[j]=id[j];
					name[j]=name[i];
					sex[j]=sex[i];
					C[j]=C[i];
					Cpp[j]=Cpp[i];
					Csh[j]=Csh[i];
					j++;
				}
				if (f==1) inc--;
			}
			if(f==0)
			{
				cout<<"\nNot found...";
			}
			
			getch();
			goto r;
			break;
		
		case 6:
			cls();
			cout<<"\nMax score list:";
			cout<<"\nID\tName\tSex\tC\tCpp\tCsh\tAverage\n";
			for ( i=0 ; i<inc; i++)
			{
				if( avg[i]>max )
				{
					foreColor(4);
					cout<<id[i];
					cout<<"\t"<<name[i];
					cout<<"\t"<<sex[i];
					cout<<"\t"<<C[i];
					cout<<"\t"<<Cpp[i];
					cout<<"\t"<<Csh[i]<<"\t"<<avg[i]<<"\n";
				}
			}
			getch();
			goto r;
			break;
			
		case 7:
			cls();
			cout<<"\nMin score list:";
			cout<<"\nID\tName\tSex\tC\tCpp\tCsh\tAverage\n";
			for ( i=0 ; i<inc; i++)
			{
				if( avg[i]<min )
				{
					foreColor(4);
					cout<<id[i];
					cout<<"\t"<<name[i];
					cout<<"\t"<<sex[i];
					cout<<"\t"<<C[i];
					cout<<"\t"<<Cpp[i];
					cout<<"\t"<<Csh[i]<<"\t"<<avg[i]<<"\n";
				}
			}
			getch();
			goto r;
			break;
		
		case 8:
			goto back;
			break;
		default:
			cout<<"Not found...";
			getch();
			goto r;
			break;
	}
		
	//--------------------------------------------------------------
	}
	
}
