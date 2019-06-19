#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<antheader.h>
using namespace std;
int main()
{
	back:
	cls();
	int i=1,N;
	double fact=1;
	cout<<"\nInput value of n!: "; cin>>N; //3
	Calculate:
		fact=fact*i, i=i+1;
		if (i<=N)
		{
			goto Calculate;
		}
	cout<<"The result of Factorial = "<<fact;
	getch();
	goto back;
} 

//{
//	int num, sum=0, count=0;
//	start:
//		cout<<"Enter value of num: "; cin>>num;
//		sum+=num;
//		count++;
//		if (count>3)
//		{
//			goto stop;
//		}
//		else 
//		{
//			goto start;
//		}
//	stop:
//		cout<<"Exiting the program.";
//	getch();
//}
