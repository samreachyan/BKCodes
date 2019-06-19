#include <iostream>
using namespace std;

class Rectangle
{
    int length,breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    void print_area()
    {
        cout << length*breadth << endl;
    }

    void print_perimeter()
    {
        cout << 2*(length+breadth) << endl;
    }
};

class Square : public Rectangle
{
public:
    Square(int side) : Rectangle(side,side)
    {}
};

int main()
{
	int height, weight;
	cout<<"Enter height : "; cin>>height;
	cout<<"Enter weight : "; cin>>weight;
	cout<<endl<<endl;
    Rectangle r(height,weight);
    Square s(height);
    r.print_area();
    r.print_perimeter();
    s.print_area();
    s.print_perimeter();
    return 0;
} 
