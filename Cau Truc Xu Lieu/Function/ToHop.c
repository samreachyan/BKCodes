#include <stdio.h>

int C(int k, int n){
	if (k==0 || k==n)
		return 1; 
	return C(k, n-1) + C(k-1, n-1);
}

int main(int argc, char const *argv[])
{
	int n, k; 

	while(1) {
		printf("\nEnter k : ");
		scanf("%d", &k);
		printf("\nEnter n : ");
		scanf("%d", &n);

		printf(" C(%d,%d) = %d \n", k, n, C(k,n));
	    getchar();
	}
	return 0;
}