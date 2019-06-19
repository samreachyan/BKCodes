#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

	float a,b,c, root1; 
	
	printf(" ax2 + bx + c=0 \n");
	printf(" Input a: "); scanf("%f" , &a);
	printf(" Input b: "); scanf("%f" , &b);
	printf(" Input c: "); scanf("%f" , &c);
	
	
	if (a=0)
	{
		root1 = -(c/b);
		printf("\t There is one root x= %f ", root1);
	}
	else
	{
		float del;
		del = b*b - 4*a*c;
		if ( del>0)
		{
			float x1, x2;
			x1= (-b+ sqrt(del))/2*a;
			x2= (-b- sqrt(del))/2*a;
			printf("\nThere are two roots x1= %f and x2= %f", x1,x2);
		}
		if (del=0)
		{
			float x3;
			x3= -b/2*a;
			printf("\nThere is a double root x1=x2= %f", x3);
		}
		else
		{
			printf("\nThere is no root for this equaltion.");
		}
	}
	getch();
}
