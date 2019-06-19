#include<iostream>
using namespace std;
#include<conio.h>
#include<sstream>
#include<math.h>
#include<stdlib.h>

// this exercise i copied with teacher to share ti.

string stu[100][8];
int ind=0, i, j;
float t=0;

int main()
{
	back:
	system("cls");
	string ids;
	int x=0,k=1,n;
	float sum=0,max=0, min=0;
	
	cout<<"\t\t1. Enter to insert\n";
	cout<<"\t\t2. Enter to view\n";
	cout<<"\t\t3. Enter to search\n";
	cout<<"\t\t4. Enter to update\n";
	cout<<"\t\t5. Enter to delete\n";
	cout<<"\t\t6. Enter to sort\n";
	cout<<"\t\t7. Enter to find maximun\n";
	cout<<"\t\t8. Enter to fine minmun\n";
	cout<<"\n\t\t Enter to choose options: ";
	cin>>n;
	
	switch(n)
	{
		case 1:
			do
			{
				system("cls");
				cout<<"Enter ID :"; cin>>stu[ind][0];
				cout<<"Enter Name :"; cin>>stu[ind][1];
				cout<<"Enter Sex :"; cin>>stu[ind][2];
				cout<<"Enter C :"; cin>>stu[ind][3];
				cout<<"Enter C++ :"; cin>>stu[ind][4];
				cout<<"Enter C# :"; cin>>stu[ind][5];
				cout<<"Enter Java :"; cin>>stu[ind][6];
				sum= ( strtof( stu[ind][3].c_str(),0 )+ strtof(stu[ind][4].c_str(),0 )+strtof(stu[ind][5].c_str(),0 )+strtof(stu[ind][6].c_str(),0 ))/4;
				stringstream s;
				s<<sum;
				stu[ind][7]=s.str();
				ind++;
				cout<<"Press any key...! ";
			}while (getch() !=27);
			goto back;
			break;
			
		case 2:
			system("cls");
			cout<<"ID\tName\tSex\tC\tC++\tC#\tJava\tAverage\n\n";
			for ( i=0 ; i<ind ; i++)
			{
				cout<<stu[i][0]<<"\t"<<stu[i][1]<<"\t"<<stu[i][2]<<"\t"<<stu[i][3]<<"\t"<<stu[i][4]<<"\t"<<stu[i][5]<<"\t"<<stu[i][6]<<"\t"<<stu[i][7]<<"\n";
			}
			system("pause");
			goto back;
			break;
			
		case 3:
			system("cls");
			cout<<"\n\tEnter to search ID: ";
			cin>>ids;
			cout<<"ID\tName\tSex\tC\tC++\tC#\tJava\tAverage\n\n";
			for (i=0 ; i<ind ;i++)
			{
				if (stu[i][0]==ids)
				{
					cout<<stu[i][0]<<"\t"<<stu[i][1]<<"\t"<<stu[i][2]<<"\t"<<stu[i][3]<<"\t"<<stu[i][4]<<"\t"<<stu[i][5]<<"\t"<<stu[i][6]<<"\t"<<stu[i][7]<<"\n";
				}
			}
			system("pause");
			goto back;
			break;
			
		case 4:
			system("cls");
			cout<<"\n\tEnter to update ID: ";
			cin>>ids;
			for (i=0;i<ind;i++)
			{
				if (stu[i][0]==ids)
				{
					cout<<"Enter ID :"; cin>>stu[i][0];
					cout<<"Enter Name :"; cin>>stu[i][1];
					cout<<"Enter Sex :"; cin>>stu[i][2];
					cout<<"Enter C :"; cin>>stu[i][3];
					cout<<"Enter C++ :"; cin>>stu[i][4];
					cout<<"Enter C# :"; cin>>stu[i][5];
					cout<<"Enter Java :"; cin>>stu[i][6];
					sum= ( strtof( stu[ind][3].c_str(),0 )+ strtof(stu[ind][4].c_str(),0 )+strtof(stu[ind][5].c_str(),0 )+strtof(stu[ind][6].c_str(),0 ))/4;
					stringstream s;
					s<<sum;
					stu[ind][7]=s.str();
				}
			}
			system("pause");
			goto back;
			break;
			
		case 5:
			system("cls");
			cout<<"Enter to delete ID:";
			cin>>ids;
			for (i=0 ; i<ind; i++)
			{
				if (stu[i][0]==ids)
				{
					k=1;
					continue;
				}
				else 
				{
					for (j=0 ; j<8; j++)
					{
						stu[x][j]=stu[i][j];
					}
					x++;
				}
			}
			ind--;
			system("pause");
			goto back;
			
		case 6:
			system("cls");
			cout<<"Sorted";
			for ( i=0 ; i<ind; i++)
			{
				for (j=1; j<ind ; j++)
				{
					if (stu[j][0]<stu[i][0]) //greater is up.
					{
						ids=stu[i][0];
						stu[i][0]=stu[j][0];
						stu[j][0]=ids;
						
						ids=stu[i][1];
						stu[i][1]=stu[j][1];
						stu[j][1]=ids;
						
						ids=stu[i][2];
						stu[i][2]=stu[j][2];
						stu[j][2]=ids;
						
						ids=stu[i][3];
						stu[i][3]=stu[j][3];
						stu[j][3]=ids;
						
						ids=stu[i][4];
						stu[i][4]=stu[j][4];
						stu[j][4]=ids;
						
						ids=stu[i][5];
						stu[i][5]=stu[j][5];
						stu[j][5]=ids;
						
						ids=stu[i][6];
						stu[i][6]=stu[j][6];
						stu[j][6]=ids;
						
						ids=stu[i][7];
						stu[i][7]=stu[j][7];
						stu[j][7]=ids;
						
					}
				}
			}
				cout<<"ID\tName\tSex\tC\tC++\tC#\tJava\tAverage\n\n";
				for (j=0 ; j<ind; j++)
				{
					cout<<stu[j][0]<<"\t"<<stu[j][1]<<"\t"<<stu[j][2]<<"\t"<<stu[j][3]<<"\t"<<stu[j][4]<<"\t"<<stu[j][5]<<"\t"<<stu[j][6]<<"\t"<<stu[j][7]<<"\n";
				}
			system("pause");
			goto back;
			break;
		
		case 7:
			system("cls");
			max=strtof(stu[0][7].c_str(),0);
			for ( i=0 ; i<ind; i++)
			{
				sum=strtof(stu[i][7].c_str(),0);
				if (sum>max)
				{
					max=sum;
				}
			}
			cout<<"\n\tMaximun is "<<max;
			system("pause");
			goto back;
		break;
		
		case 8:
			system("cls");
			min=strtof(stu[0][7].c_str(),0);
			for ( i=0 ; i<ind ; i++)
			{
				sum=strtof(stu[i][7].c_str(),0);
				if (sum<min)
				{
					min=sum;
				}
			}
			cout<<"\n\tMinimun is "<<min;
			system("pause");
			goto back;
		break;
		
	}
}
