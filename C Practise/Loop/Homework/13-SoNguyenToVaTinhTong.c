#include<stdio.h>
#include<conio.h>
void main(){
	int number, i, j, sum;
	
	do {
		printf("\nInput any prime number : ");
		scanf("%d", &number);
		// prime number 
		for (i=2 ; i <= number ; i++){
			int k=1; 
			for (j=2 ; j< i ; j++){
				if (i%j == 0){
					k=0 ;
					break;
				}
			}
			if (k == 1){
				sum += i*i ;
				printf(" %d", i);
			}
		}
	} while (number < 1);
	printf( "\nThe result sum = %d", sum);
	
	getch();
		
}
