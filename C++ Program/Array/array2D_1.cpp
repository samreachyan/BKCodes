#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int ar[5][3]={ {0,1,2},{1,2,3},{3,4,5},{5,6,7},{7,8,9} };
	for ( int i=0 ; i<5; i++)
	{
		for( int j=0; j<3; j++)
		{
			cout<<"table["<<i<<"]["<<j<<"]="<<ar[i][j]<<" \n";
		}
	}
	getch();
}
