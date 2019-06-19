#include <stdio.h>

int factorial (int n) {
	int gt ;
	if (n%2 == 0) {
		for (gt = 1 ; n >= 2 ; n -= 2 ){
			gt *= n ;
			printf("%d * ", n);
		}
	} else {
		for (gt = 1; n>0 ; n-=2 ){
			gt *= n; 
			printf("%d * ", n);
		}
	}
	return gt; 
}

int main(int argc, char const *argv[])
{
	int n;
	printf("\nCho n = ");
	scanf("%d", &n);
	printf("\n%d !! = %d", n, factorial(n) );
	return 0;
}