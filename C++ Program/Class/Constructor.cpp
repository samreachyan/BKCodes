#include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int breadth;
	public:
		void setDimension(int l, int b)
		{
			length = l;
			breadth = b;
		}
		int getArea()
		{
			return length * breadth;
		}
		Rectangle()				// Constructor
		{
			cout << "Constructor" << endl; // this is the first of running the program.
		}
		~Rectangle()             // Destructor
		{
			cout << "Destructor" << endl; // this is the end of the running.
		}
};

int main()
{
	Rectangle rt;
	int weight, height;
	cin>>weight>>height;
	rt.setDimension(weight, height);
	cout << rt.getArea() << endl;
	return 0;
}
