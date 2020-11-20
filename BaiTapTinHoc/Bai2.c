#include<stdio.h>
#include<math.h>

int main()
{
	printf("Viet ham so f(x) = 2x^4 -3 \n");

	float x, fx, delt=0.02;
	printf("Nhap vao so x : ");
	scanf("%f", &x);
		fx = 2*pow(x,4) - 3;
	for (int i = 0; i < 21; ++i)
	{
		printf("%0.2f\n", fx);
		fx -= delt;
	}
	return 0;
}