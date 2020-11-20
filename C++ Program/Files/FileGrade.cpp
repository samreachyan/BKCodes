#include<iostream>
#include<fstream>
#include<sstream>
#include<conio.h>
using namespace std;

int main(){
	ifstream gradeFile;
	stringstream  grades;
	int grade;
	int total=0;
	gradeFile.open("grades.txt");
	string line;
	getline(gradeFile, line);
	grades << line;
	gradeFile.close();
	for (int i=0 ; i<5; i++){
		grades >> grade;
		total +=grade;
	}
	double average = total/5 ;
	cout<<"Average : "<<endl;
	return 0;
	
}
