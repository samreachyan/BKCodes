#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;	//	to solve the program we use the do - while to help
class student{
	public:
		string name;
		string pay;
} info[20];

int main()
{
	cout<<"Information student's payment"<<endl;
	int n=0 , sum=0;
	do {
		cout<<endl<<endl<<"Student's name : "; 
		cin>>info[n].name;
		cout<<"Student's payment : "; 
		cin>>info[n].pay;
		n++;
	} while( getch() != 27); //space to leave
	
	//system("cls");
	cout<<endl<<"The Result"<<endl;
	
	for (int i=0 ; i<n ; i++){
		cout<<i+1<<" "<<info[i].name<<"\t"<<info[i].pay<<endl;
		sum += atoi(info[i].pay.c_str());
	}
	cout<<"-----------\n\t Total = "<<sum;
	getch();
}
