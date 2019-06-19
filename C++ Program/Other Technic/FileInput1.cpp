#include<iostream> 
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
	fstream file;
	int n;
	string form;
	
	file.open("Filetest1.txt",ios::in|ios::binary|ios::app);
	cout<<"Enter n value : "; cin>> n;
	for (int i=0 ; i<n; i++){
		if(file.open("Filetest1.txt")){
			cout<<"Enter your name: "; cin>>name[i];
		}		
	}
	

}
