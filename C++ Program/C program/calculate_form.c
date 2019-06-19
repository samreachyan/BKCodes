#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	printf("Form (a+b)^2=a^2+2ab+b^2");
	printf("\nEnter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=pow(a+b,2);
	printf("\nResult calculating is (a+b)^2=%d",c);
}

// tutorialspoint
