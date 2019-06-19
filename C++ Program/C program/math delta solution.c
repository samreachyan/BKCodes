#include<stdio.h>
#include<math.h>
void main()
{

	float a,b,c,d, d1,x1,x2,x3;
	printf("how to find this equation: ax^2+bx+c=0");
	printf("\nEnter value of a:"); scanf("%f",a);
	printf("\nEnter value of b:"); scanf("%f",b);
	printf("\nEnter value of c:"); scanf("%f",c);
	
	d=b*b-(4*a*c);
	
	if (d>0) {
	
		d1=sqrt(d);
		x1=(b-d1)/2*a;
		x2=(b+d1/2*a);
		printf("x1=%f and x2=%f",x1,x2);
	}
	if (d=0){
		x3=b/2*a;
		printf("x1=x2=%f",x3);
	}
	if (d<0){
		printf("No answers of x1 and x2.");
	}
	
}
