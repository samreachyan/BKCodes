#include<stdio.h>

void main()
{
	int i=0 ,sum=0 ; 
	for ( i ; i<=100; i++){
		if ( i%2 != 0 ){
			sum +=i;
		}
	}
	printf("1+3+5+...+99 \n\nS = %d", sum);
	getch();
}
