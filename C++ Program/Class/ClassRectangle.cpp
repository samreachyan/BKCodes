#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle{
	int width, height;
	public :
		Rectangle () { } ;
		Rectangle (int x, int y): width(x), height(y) {	}
		int area () {
			return width*height;
		}
		
		friend Rectangle duplicate(const Rectangle &);

};
Rectangle duplicate ( const Rectangle & param){
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height *2;
	return res;
}

int main(){
	Rectangle food;
	Rectangle bar (2,3 );
	food = duplicate (bar);
	
	cout << "The area = " <<food.area() ;
	
	getch();
}
