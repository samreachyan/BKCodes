#include<stdio.h>

void main()
{
//	int a, b, c=0;
//	
//	printf("Please input an value of a:"); scanf("%d", &a);
//	printf("Please input an value of b:"); scanf("%d", &b);
//	c=a+b;
//	printf("So total of your value is %d.", c);
//	return 0;	

//	int a;
//	float b, td,t;
//	printf("Input the price:"); scanf("%d",&a);
//	printf("Input discount:"); scanf("%f",&b);
//	td=a*b/100;
//	t=a-td;
//	printf("Total the prince is %0.0f.", t);

	int b;
	char a[20];

	
	printf("Please input an value b:"); scanf("%s", &b);
	printf("Please input an value of a:");
	fflush(stdin); //use for dont let skip
	gets(a); //use to get more letter and get space
	
	printf("U had put an value is %d %s",b ,a);

}
