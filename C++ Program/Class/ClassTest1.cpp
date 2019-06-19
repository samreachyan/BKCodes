#include<iostream>
#include<conio.h>
using namespace std;

class Test{
	public:
		void setName(string x){
			name = x;
		}
		string getName(){
			return name;
		}
	private:
		string name;
	
};

int main()
{
	Test bo;
	bo.setName("Hello Samreach");
	cout<<bo.getName();
	getch();
}
