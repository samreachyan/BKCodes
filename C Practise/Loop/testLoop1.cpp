#include<stdio.h>
#include<khmerheader.h>

int main()
{
	int j=2;
	for (int i=1 ; i<=10 ; i++)
	{
		delay(200);
		printf("%d x %d \t= %d\n",j,i,i*j);
	}
}
