#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	float x, fx=0;
	printf("Nhap vao so x : ");
	scanf("%f", &x);

	if ( x >= 0 ) {
		fx = pow(3,2*x) + 5 ;
	} else {
		fx = ((log(-x)/log(3))+1)/3;
	}

	printf("%0.4f\n", fx);
	return 0;
}