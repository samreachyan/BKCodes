#include<iostream>
#include<conio.h>
using namespace std;

//constructor
class BOX{ 
   private: 
  		int width,height; 

   public: 
		BOX(){ 
    	width=height=10; 
   		} 
   		BOX(int distance,int high){ 
	      this->width=distance; 
    	  this->height=high; 
	   } 
   int getArea(){ 
      return width*height; 
   } 
};

int main(){ 
   BOX box1=BOX(); 
   BOX box2=BOX(20,30); 
   cout<<endl<<"The area of box1 is "<<box1.getArea()<<endl;	     
   cout<<"The area of box2 is "<<box2.getArea(); 
   getch(); 
}
