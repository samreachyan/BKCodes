#include<iostream>
using namespace std;
#include <cstdlib> 
#include<iomanip> 
  


//void swap(int, int);
//int main()
//{
//	swap(2,5);
//}
//void swap(int a, int b )
//{
//	int t;
//	t=a+b;
//	cout<<t;
//}

void display()
{

	cout<<"MENU*********************"<<endl;
	cout<<"1. Add"<<endl;
	cout<<"2. Exp"<<endl;
	cout<<"3. Mul"<<endl;
	cout<<"4. Div"<<endl;
}
void add(int a, int b)
{
	return(a+b);
}
void exp(int a, int b)
{
	int t;
	t=a-b;
	cout<<t<<endl;
}
void mul(int a, int b)
{
	int t;
	t=a*b;
	cout<<t<<endl;
}
void div(int a, int b)
{
	int t;
	t=a/b;
	cout<<t<<endl;
}
int main()
{
display();

	int n;
	int a,b;
	
	do {
		cout<<"Enter option : "; cin>>n;
		cout<<"Enter your a : "; cin>>a;
		cout<<"Enter your b : "; cin>>b;
		cout<<"\n";
		switch(n)
		{
			case 1: 
			add(a,b);
			break;
		}
		
	}
}


//  
//void displaymenu(){ 
//cout<<"==================================================="<<"\n"; 
//cout<<"                         MENU                                  "<<"\n"; 
//cout<<"==================================================="<<"\n"; 
//cout<<"     1.Add"<<"\n"; 
//cout<<"     2.Subtract"<<"\n"; 
//cout<<"     3.Multiply"<<"\n"; 
//cout<<"     4.Divide"<<"\n"; 
//cout<<"     5.Modulus"<<"\n"; 
//     } 
//int Add(int a,int b){ 
//    return(a+b); 
//} 
//  
//int Substract(int a, int b){ 
//    return(a-b); 
//} 
//  
//int Multiply(int a, int b){ 
//    return(a*b); 
//} 
//float Divide(int a,int b){ 
//      return(a/b); 
//} 
//int Modulus(int a, int b){ 
//    return(a%b); 
//} 
//  
//int main(int argc, char *argv[]) 
//{ 
// //show menu 
//displaymenu(); 
//int yourchoice; 
//int a; 
//int b; 
//char confirm; 
//do 
//{ 
//cout<<"Enter your choice(1-5):"; 
//cin>>yourchoice; 
//cout<<"Enter your two integer numbers:"; 
//cin>>a>>b; 
//cout<<"\n"; 
//switch(yourchoice){ 
// case 1:cout<<"Result:"<<Add(a,b);break; 
// case 2:cout<<"Result:"<<Substract(a,b);break; 
// case 3:cout<<"Result:"<<Multiply(a,b);break; 
// case 4:cout<<"Result:"<<Divide(a,b);break; 
// case 5:cout<<"Result:"<<Modulus(a,b);break; 
// default:cout<<"invalid"; 
//                   } 
//                   
//cout<<"\nPress y or Y to continue:"; 
//       cin>>confirm; 
//}while(confirm=='y'||confirm=='Y'); 
//  system("PAUSE"); 
//   return EXIT_SUCCESS; 
//}
