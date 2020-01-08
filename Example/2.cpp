#include <iostream>
#include <list>
using namespace std;

class Student
{
	private:
		string name;
		list<int> listmark;
		double final;
	public:
		Student();

		~Student();

		Student(char * name, list<int> marks, double final){
				
		}

		void setName(char * Sname) {
			name = Sname;
		}
		string getName(){
			return name;
		}
		void setMark(list<int>marks) {
			listmark = marks;
		}
		// void getMark(){

		// }

	
};

int main(int argc, char const *argv[])
{
	
	return 0;
}