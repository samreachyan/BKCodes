#include<iostream>
using namespace std;
#include<antheader.h>

int main()
{
	cls();
	char *Name[50]; 
	int *Score [20][4];
	int j=0, i=0;
	
	do
	{
		system("cls");
		cout<<"****** Enter Your Name ******"<<endl;
		cout<<"Input Name["<<i<<"] :";
		cin>> *Name[i];
		cout<<"Input score C++ :";
		cin>> (Score[i][0]);
		cout<<"Input score Java :";
		cin>> (Score[i][1]);
		cout<<"Input score C# :";
		cin>> (Score[i][2]);
		i++;
	}while (getch() != 27);
	
	cout<<endl<<"Name\tC++\tJava\tC#"<<endl;
	
	for ( j=0 ; j<i; j++)
	{
		cout<<*Name[j]<<"\t"<<*(Score[j]+0)<<"\t"<< *(Score[j]+1)<<"\t"<<*(Score[j]+2)<<"\t"<<endl;
	}
}
