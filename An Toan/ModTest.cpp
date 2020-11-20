#include <stdio.h>
#include <math.h>
int main(){
//	int k;
//	k = 7 % 2;
//	printf("%d", k);
	
	for (int i=0; i< 20; i++){
		int k = pow(3,i);
		printf("%d ", k % 17);
	}
}
