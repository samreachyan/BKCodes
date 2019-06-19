#include <stdio.h>

int main(int argc, char const *argv[])
{
	long n, i ;
	printf("\nNhao vao N : ");
	scanf("%ld", &n);


	printf("\nTat ca cac uoc cua %ld la :\n", n);
	printf(" 1");

	for (i=2 ; i<=n/2 ; i++){
		if (n%i == 0 ){
			if (n/i <= n/2){
				printf("\n %ld", i);
			} else {
				printf("\n %ld", i);
				printf("\n %ld", n/i);
			}
		}
	}

	printf("\n %ld",n);

	return 0;
}