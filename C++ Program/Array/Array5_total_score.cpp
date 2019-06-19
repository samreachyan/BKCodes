#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,score ,sum=0;
	string sub[4]={ "C","C++","Java","C#"};
	
	for ( i=0 ; i<4; i++)
	{
		cout<<"Enter subject ["<<sub[i]<<"] : "; cin>>score;
		sum=sum+score;
	}
	cout<<"Total score is : "<<sum<<"\nAverage is : "<<sum/4;
	getch();
}
