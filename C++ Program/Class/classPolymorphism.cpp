#include<iostream>
#include<conio.h>

#include<string>
using namespace std;

class person {
	public:
		virtual void input()=0;
		virtual void output()=0;
};

class student : public person {
	protected :
		int id; 
		string name, gender, grade;
		float average;
	public :
		void input(){
			cout<<"Information of student\n";
			cout<<"\nInput ID : ";	cin>>id;
			cout<<"Input Name : ";	cin>>name;
			cout<<"Input Gender : "; cin>>gender;
			cout<<"Input average :"; cin>>average;
		}
		void output(){
			cout<<endl<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<average<<endl;
		}
};

class employee : public person{
	protected :
		int id;
		string name, gender, grade;
		float rate, hour;
	public :
		void input(){
			cout<<"\nInformation of employee\n";
			cout<<"Input ID : ";	cin>>id;
			cout<<"Input Name :"; cin>>name;
			cout<<"Input Gender :"; cin>>gender;
			cout<<"Input Rate : "; cin>>rate;
			cout<<"Input Hour : "; cin>>hour;
		}
		void output(){
			cout<<endl<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<rate<<"\t"<<hour<<endl;
		}
};

int main(){
	person *pt1, *pt2;
	student obj1;
	pt1 = & obj1;
	pt1->input();

	employee obj2;
	pt2 = & obj2;
	pt2->input();
	pt2->output();
	getch();
}
