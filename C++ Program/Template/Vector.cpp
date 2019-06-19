#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

class person{
	private:
		char name[20];
		char sex[10];
		int age;
	public:
	void input(){
		cout<<endl<<"Input Name : "; cin>>name;
		cout<<"Input Sex : "; cin>>sex;
		cout<<"Input Age : "; cin>>age;
	}
	void output(){
		cout<<name<<"\t"<<sex<<"\t"<<age<<"\t"<<endl;
	}
};

int main(){
	int n,i ;
	vector<person>list;
	person p;
	cout<<"Input N Person : "; cin>>n;
	for ( int i=0 ; i<n; i++ ){
		p.input();
		list.push_back(p);
	}
	cout<<endl;
	cout<<"====== Information of Person ======"<<endl;
	cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<endl;
	for ( i=0 ; i<list.size(); i++){
		list[i].output();
	}
	getch();
}
