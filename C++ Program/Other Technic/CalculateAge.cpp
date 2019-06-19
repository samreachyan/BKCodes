#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

bool check_leap_year(int year)
{
	return ( (year%400 == 0 || year %100 !=0) && (year %4 !=0));
}
int main()
{
	start:
		system("cls");
	int monthsCalendar[12]={31,28,30,31,30,31,30,31,30,31,30,31};
	SYSTEMTIME now;
	GetSystemTime(&now);
	int years = now.wYear;
	int months = now.wMonth;
	int days = now.wDay;
	cout<<"Current date is : \n";
	cout<<days<<"/"<<months<<"/"<<years<<endl;
	int y,m,d;
	cout<<"Enter Date of Birth (dd/mm/year): \n";
	cout<<"dd:";	cin>>d;
	cout<<"mm:";	cin>>m;
	cout<<"year:";	cin>>y;
	if (y>years || d>31 || m>12 )
	{
		cout<<"Invailid";
		getch();
		goto start;
	}
	
	if (y>days)
	{
		months -=1;
		if (check_leap_year(y)==true && m==2)
		{
			days += monthsCalendar[m-1]+1;
		}
		else{
			days += monthsCalendar[m-1];
		}
	}
	if (months <m)
	{
		years -=1;
		months +=12;
	}
	int CalDay=days-d;
	int CalMonth=months-m;
	int CalYear=years-y;
	
	cout<<"\nYour age is "<<CalYear<<" years old "<<CalMonth<<" months "<<CalDay<<" days.";
	getch();
	goto start;
	
}
