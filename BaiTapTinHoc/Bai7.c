#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int x, n , sum=0;
	printf("S = 1 + x + x^2 + x^3 + ... + x^n\n");
	printf("Nhap vao so n : ");
	scanf("%d", &n);
	printf("Nhap vao so x : ");
	scanf("%d", &x);

	for (int i = 0 ; i <=n ; ++i){
		sum += pow(x,i);
	}

	printf("Sum = %d ", sum );
	return 0;
}