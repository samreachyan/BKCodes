#include<stdio.h>
#include<conio.h>
//void main(){
//	int i, number, sum=0;
//	printf("Input number : ");	scanf("%d", &number);
//	printf("\n\n");
//	for ( i=1 ; i<=number ; i++){
//		if (number % i ==0 ){
//			sum += i;
//			printf("%d + ", i );
//		}
//	}
//	printf("\b\b= %d", sum);
//	getch();
//}

void main(){
	int i=1 , number , sum=0;
	printf("Input number : ");	scanf("%d", &number);
	
	while ( i <= number ) {
		if (number % i == 0){
			sum += i;
			printf("%d + ", i );
		}
		i++;
	}
	printf("\b\b= %d", sum);
	getch();
}




//void main(){
//	int i, j , a=20, b=5, result2 ;
//	for ( i = 1 ; i<=a || j<=b ; i++){
//		for ( j=1 ; j<= a || j<= b ; j++)
//			if ( (a*i) == (b*j) ){
//				printf("%d ", a*i);
//				result2 = a*i ;	
//			}
//			break;
//	}
//	printf("\n\nThe frist small number is %d", result2);
//}
