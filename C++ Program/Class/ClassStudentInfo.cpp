#include <iostream>
#include<iomanip>
#include <string>
#include<stdlib.h>
using namespace std; //		this got error running the program
class Student
{
	string name;
	int marks;
	public:
		void getName()
		{
			getline( cin, name );
		}
		void getMarks()
		{
			cin >> marks;
		}
		void displayInfo()
		{
			cout << "Name : " << name << endl;
			cout << "Marks : " << marks << endl;
		}
};

int main()
{
	Student st[5];
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		cout << "Enter name : " ;
		st[i].getName();
		cout << "Enter marks : " ;
		st[i].getMarks();
	}
	
	for( int i=0; i<5; i++ )
	{
		cout << "Student " << i + 1 << endl;
		st[i].displayInfo();
	}
	return 0;
}
