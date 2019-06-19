#include<stdio.h>
#include<conio.h>

// 18. Tinh tong cac chu so cua mot so nguyen n

void main(){
	int i,n=0 , number , sum=1 ;
	printf("Input number : ");
	scanf("%d", &number );
	do {
		sum = sum + (number%10) ;
		number = number/10 ;
	} while ((number/10) != 0);
	printf("\nThe result = %d", sum);
	getch();
}
