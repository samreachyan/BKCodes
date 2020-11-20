#include<stdio.h>
#include<conio.h>

// 13. tinh factorial 

void main(){
	int i, n, factorial = 1 ;
	printf("Input n factorial : ");
	scanf("%d", &n);
	
	printf("\n\nThe factorial of %d! = " , n);
	for ( i = 1 ; i <= n; i++ ) {
		factorial *= i ;
		printf("%d x ", i) ;
	}
	printf("\b\b = %d " , factorial) ;
	getch();
}
