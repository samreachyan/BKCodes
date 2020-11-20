#include<iostream>
#include<conio.h>
using namespace std;

struct student {
	string name;
	int score;
}list[20] ;

int main()
{
	int n=0;
	
	do {
		system("cls");
		cout<<"Find who failed the exam"<<endl;
		cout<<"\nInput name : ";
		cin>>list[n].name;
		cout<<"Input score :";
		cin>>list[n].score;
		n++;
	} while( getch() !=27);
	
	cout<<"\n-------------"<<endl;
	
	for (int i=0 ; i<n ; i++){
		if ( list[i].score < 5)
			cout<<list[i].name<<"\t"<<list[i].score<<" failed."<<endl;
	}
	
	getch();
}
