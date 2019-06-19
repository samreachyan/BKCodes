#include<iostream>
#include<conio.h>
#include<iomanip>
#include<sstream>
#include<antheader.h>

bool searchDay(int m, int d){
	string Holiday[]={"1+1","1+7","2+22","3+8","4+13",
						"4+14","4+15","5+1","5+13","5+14","5+15","5+20","5+24","6+1",
						"6+18","9+24","9+30","10+1","10+2","10+15","10+23",
						"10+29","11+9","11+13","11+14","11+15","12+10"};
	int lengthday = sizeof(Holiday)/sizeof(string); //27
	bool search=false;
	stringstream conday;
	stringstream conmonth;
	conday<<d;
	conmonth<<m;
	string result = conmonth.str() +"+"+conday.str();
	bool b = false;
	for ( int i=0 ; i<lengthday; i++){
		if(result == Holiday[i]){
			b = true;
			break;
		}
	}
	return b;
}

int main(){
	const int mdays[]={31,29,31,30,31,30,31,31,30,31,30,31};
	int wday =5 ;
	cout<<"		\tCalendar of 2017\n\n";
	for(int month=0 ; month<12 ; ++month){
		switch(month){
			case 0:
				foreColor(3);	cout<<"\t\tJanuary\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 1:
				foreColor(3);	cout<<"\t\tFebruary\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 2:
				foreColor(3);	cout<<"\t\tMarch\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 3:
				foreColor(3);	cout<<"\t\tApril\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 4:
				foreColor(3);	cout<<"\t\tJune\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 5:
				foreColor(3);	cout<<"\t\tJuly\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 6:
				foreColor(3);	cout<<"\t\tMay\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 7:
				foreColor(3);	cout<<"\t\tAugust\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 8:
				foreColor(3);	cout<<"\t\tOctober\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 9:
				foreColor(3);	cout<<"\t\tSeptember\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			case 10:
				foreColor(3);	cout<<"\t\tNovember\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
			default :
				foreColor(3);	cout<<"\t\tDecember\n";
				foreColor(6);	cout<<"  Sun  Mon  Tue  Wed  Thu Fri  Sat\n";
				break;
		}
		cout<<setw(5 * wday)<<"";
		for (int mday=0 ; mday<mdays[month]; mday++, ++wday){
			if(wday==7){
				cout<<'\n';
				foreColor(4);
				wday=0;
			}
			else
				foreColor(7);
			if(searchDay(month+1,mday+1));{
				foreColor(4);
			}
			cout << setw(5) << mday+1;	
		}
		cout << endl;
	}
	getch();
	return 0;
}
