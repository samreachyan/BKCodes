#include<iostream>
#include<conio.h>
using namespace std;


// polymorphism class
class Shape { 
  	protected:
  		float width, height; 
  		
	public: 
  		void set_data(float a, float b){
		    width = a; height = b; 
		} 
}; 

class Rectangle:public Shape { 
	public: float area () { 
		return (width * height); 
  	}
}; 

class Triangle:public Shape { 
   	public: float area () {
   		return (width * height / 2); 
   	} 
};

int main () { 
   Shape *pshape;//pshape is a pointer to an object class Shape. 
   Rectangle rec;//creatge rec object 
   Triangle tri; // create tri object
   pshape=&rec; 
   pshape->set_data(10,20); // call function to calculate in pointer
   cout<<"The area of Rec is = "<<rec.area();    
   pshape=&tri; 
   pshape->set_data(10,20); 
   cout<<endl<<"The area of Tri is = "<<tri.area();     
   cin.get();
   
   getch();
}

