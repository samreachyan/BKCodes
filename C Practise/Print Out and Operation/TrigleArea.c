#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,p,s;
	printf("Find square area of trigle and round distance\n");
	printf("Input a: "); scanf("%f",&a);
	printf("Input b: "); scanf("%f",&b);
	printf("Input c: "); scanf("%f",&c);
	
	p=(a+b+c)/2;
	s= sqrt (p*(p-a)*(p-b)*(p-c));
	
	printf("\n\nSquare area is %0.3f and round distance is %0.3f .",2*p,s); 
}
