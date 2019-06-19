/*
	author	: YAN Samreach
	Date 	: 21/12/2018
	Describe: Calculate function
*/

#include<stdio.h>
int main()
{
	printf("Viet ham so f(x) = 3x^2 + 5 \n");

	float x, fx, delt=0.05;
	printf("Nhap vao so x : ");
	scanf("%f", &x);
		fx = 3*x*x + 5;
	for (int i = 0; i < 21; ++i)
	{
		printf("%0.2f\n", fx);
		fx += delt;
	}
	return 0;
}