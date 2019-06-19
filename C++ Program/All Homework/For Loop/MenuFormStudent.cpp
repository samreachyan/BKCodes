#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>

string id[100],name[100],gender[100],subject[100],score[100],temp="";
int ix=0,k=0;
int main()
{	r:
	
	cls();
	int y=5,m=1;
	
	string search;
	gotoxy(30,4);cout<<"1.Enter to insert ";
	gotoxy(30,5);cout<<"2.Enter to view ";
	gotoxy(30,6);cout<<"3.Enter to search ";
	gotoxy(30,7);cout<<"4.Enter to update ";
	gotoxy(30,8);cout<<"5.Enter to delet ";
	gotoxy(30,9);cout<<"6.Enter to sort ";
	int n;
	gotoxy(30,11);cout<<"please chose the option above ";
	cin>>n;
	switch(n)
	{
		case 1:
	do
	{
	
	cout<<"Input id :";cin>>id[ix];
	cout<<"Input name :";cin>>name[ix];
	cout<<"Input gender :";cin>>gender[ix];
	cout<<"Input subject :";cin>>subject[ix];
	cout<<"Input score :";cin>>score[ix];
	ix++;
	cout<<"press enter for(yes) else esc for(exit)\n ";
    }
    while(getch()!=27);
    goto r;
    break;
    
    	case 2:
    		cls();
    	
    		gotoxy(2,3);cout<<"id";
    		gotoxy(10,3);cout<<"name";
    		gotoxy(18,3);cout<<"gender";
    		gotoxy(30,3);cout<<"subject";
    		gotoxy(40,3);cout<<"score";
    	
    		for(int i=0;i<ix;i++)
    		{
    			gotoxy(3,y);	cout<<id[i];
    			gotoxy(11,y);	cout<<name[i];
    			gotoxy(19,y);	cout<<gender[i];
    			gotoxy(31,y);	cout<<subject[i];
    			gotoxy(41,y);	cout<<score[i];
    			y+=2;
			}
			getch();
			goto r;
			break;
			
		case 3:
			cls();
			cout<<"input id to search :";cin>>search;
			gotoxy(2,3);cout<<"id";
    		gotoxy(10,3);cout<<"name";
    		gotoxy(18,3);cout<<"gender";
    		gotoxy(30,3);cout<<"subject";
    		gotoxy(40,3);cout<<"score";
    	
    		for(int i=0;i<ix;i++)
    		{	
				if(id[i]==search)
    		{	
    			gotoxy(3,y);	cout<<id[i];
    			gotoxy(11,y);	cout<<name[i];
    			gotoxy(19,y);	cout<<gender[i];
    			gotoxy(31,y);	cout<<subject[i];
    			gotoxy(41,y);	cout<<score[i];
			}
    		
    			
			}
			getch();
			goto r;
			break;
			case 4:
			cls();
			cout<<"input element to update :";
			cin>>search;
			gotoxy(2,3);cout<<"id";
    		gotoxy(10,3);cout<<"name";
    		gotoxy(18,3);cout<<"gender";
    		gotoxy(30,3);cout<<"subject";
    		gotoxy(40,3);cout<<"score";
    	
    		for(int i=0;i<ix;i++)
    		{	if(id[i]==search)
    			gotoxy(3,y);
    			cout<<"\ninput id new :";
				cin>>id[i];
				getch();
				cls();
			gotoxy(2,3);cout<<"id";
    		gotoxy(10,3);cout<<"name";
    		gotoxy(18,3);cout<<"gender";
    		gotoxy(30,3);cout<<"subject";
    		gotoxy(40,3);cout<<"score";
    	
    		for(int i=0;i<ix;i++)
    		{
    			gotoxy(3,y);	cout<<id[i];
    			gotoxy(11,y);	cout<<name[i];
    			gotoxy(19,y);	cout<<gender[i];
    			gotoxy(31,y);	cout<<subject[i];
    			gotoxy(41,y);	cout<<score[i];
    		
			}
		
			}
			getch();
			goto r;
			break;
			case 5:
				cls();
				cout<<"Input id to delete :";cin>>search;
				for(int i=0;i<ix;i++)
				{
					if(id[i] !=search)
					{
						id[k]=id[i];
						name[k]=name[i];
						gender[k]=gender[i];
						subject[k]=subject[i];
						k++;
						m++;
					}
				}
				if(m>ix)
				{
					cout<<"No record to delet ...!";
					getch();
					goto r;
				}
				cout<<"Deletd sucessful.....!";
				ix--;
				
				getch();
				goto r;
			break;
			
			case 6:
				cls();
				
				cout<<"Input id to sort :";
				cin>>search;
					gotoxy(2,3);cout<<"id";
    				gotoxy(10,3);cout<<"name";
    				gotoxy(18,3);cout<<"gender";
    				gotoxy(30,3);cout<<"subject";
    				gotoxy(40,3);cout<<"score";
				for(int i=0;i<ix;i++)
				{
					for(int j=i;j<ix;j++)
					{
						if(id[j].substr(0,1)<id[i].substr(0,1))
						{
							temp=id[i];
							id[i]=id[j];
							id[j]=temp;
						}
					}
				}
				for(int i=0;i<ix;i++)
				{
				gotoxy(3,y);	cout<<id[i];
    			gotoxy(11,y);	cout<<name[i];
    			gotoxy(19,y);	cout<<gender[i];
    			gotoxy(31,y);	cout<<subject[i];
    			gotoxy(41,y);	cout<<score[i];
				}
				break;
				getch();
				goto r;	
	}
			
}
