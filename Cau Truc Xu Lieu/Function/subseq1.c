#include <stdio.h>

// this function is not work 
int subseq1 (int a[], int count){
	int max = -9999999;
	int s ;
	for (int i = 0; i < count ; ++i){
		for (int j = i; j < count ; ++j){
			s = 0 ; 
			for (int k = i; k < j; ++j){
				s += a[k] ;
			}
				max = s > max ? s : max ;
		}
	}
	return max; 
}

int subseq2 (int a[], int count){
	int max = -9999999;
	int s = a[1];
	for (int i = 0; i < count; ++i)
	{
		if ( s > 0 ){
			s += a[i];
		} else {
			s = a[i];
		}
		if ( s > max ) max = s;
	}
	return max;
}

int main(int argc, char const *argv[])
{
	int a[10] = {2,4,-7,5,7,-10,4,3};
	int n = sizeof(a)/sizeof(a[0]);
	
	// This code not work
	// printf("%d\n", subseq1(a, n));

	printf("Max = %d\n", subseq2(a,n) );
	return 0;
}