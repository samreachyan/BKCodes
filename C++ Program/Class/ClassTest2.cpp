#include<iostream>
#include<conio.h>
using namespace std;

class Circle{
//	private:
		int CenterX, CenterY;
		int Ratdius;
	public:
		static int Count;
		int GetRadius()
		{
			return Radius;
		}
		int GetY(){
			return CenterY;
		}
		int GetX(){
			return CenterX;
		}
		void Show();
		void Hide();
		void MoveTo(int NewCenterX, int NewCenterY) {};
};

int main(){
	Circle C1;
	C1.CenterX =100;
	C1.CenterY =120;
	C1.Radius =20;
	cout<<" C1.CenterX  = "<<C1.GetX()<<endl;
	cout<<" C1.CenterX  = "<<C1.GetY()<<endl;
	cout<<" C1.Radius  = "<<C1.Radius()<<endl;
	
	getch();
}
