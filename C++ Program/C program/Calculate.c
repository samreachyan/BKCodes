#include<stdio.h>

void main()
{
	float a,b,c,d,e;
	
	printf("\nHow to calculate (a/b)+(c/d)");
	printf("\n\na:"); scanf("%f",&a);
	printf("b:"); scanf("%f",&b);
	printf("c:"); scanf("%f",&c);
	printf("d:"); scanf("%f",&d);

	e=(a/b)+(c/d);
	
	printf("\nThe result of calculating is %f",e);
	getch();
} 
