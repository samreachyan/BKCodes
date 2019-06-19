// find the greatest number in Matrix using Pointer to compare.
#include <stdio.h>
#include <malloc.h>
int main(int argc, char const *argv[])
{
	float **x , max;
	x = (float**) malloc (2*sizeof(float*)) ;
	for (int i = 0; i < 3; ++i)
		x[i] = (float*) malloc (3*sizeof(float)) ;
	for (int i = 0; i < 2; ++i)
		for (int j= 0; j < 3; ++j)
		{
			printf("x[%d][%d] = ", i, j);
			scanf("%f", * (x+i) + j );
		}

	max = x[0][0];

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 3; ++j)
			if (max < x[i][j]) max = x[i][j] ; 
	printf("\nThe max = %.0f", max);

	for (int i = 0; i < 3; ++i)
		free(x[i]);
	free(x);

	return 0;
}