// The greatest number in the matrix

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j; 
	int x[2][3], max;
	for (i=0 ; i<2 ; i++){
		for (j=0 ; j<3 ; j++){
			printf("x [%d] [%d] = ", i, j);
			scanf("%d", * (x+i) + j );
		}
	}

	max = x[0][0];
	for (i=0 ; i<2 ; i++)
		for (j=0 ; j<3 ; j++)
			if (max < x[i][j])  max = x[i][j] ;

	printf("The maximun is %d" , max);
	return 0;
}