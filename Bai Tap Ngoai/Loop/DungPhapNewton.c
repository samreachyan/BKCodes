#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int a;
	float e=0.0001 , x0, x1;

	printf("hay nhap mot so duong a : \n");
	scanf("%d", &a);
	x0 =(1+a)/2 ;
	x1 = (x0 + a/x0)/2 ;

	while(abs((x1-x0)/x0) > e){
		x0=x1;
		x1 = (x0+a/x0)/2 ;
	}

	printf("\nCan bac 2 cua %d la %.5f ", a, x1);
	return 0;
}