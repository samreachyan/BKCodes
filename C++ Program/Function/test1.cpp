#include <iostream>
using namespace std;
#include<conio.h>
 
void swap(int &x, int &y) {
   int temp;
   temp = x;
   x = y;   
   y = temp; 
}
int main () {
   int a = 200, b = 100;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl<<endl<<endl;
   swap(a, b);
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   getch();
}
