#include<stdio.h>
#include<conio.h>
void main(){
	Top:
		system("cls");
	int a, b, i, j, result , result2 , k ;
	printf("Input number a: ");		scanf("%d", &a);
	printf("Input number b: ");		scanf("%d", &b);
	
	printf("\n - Uoc so giong nhau = ");
	for ( i = 1 ; i<= a || i<=b ; i++ ){
		if ( (a%i==0) && (b%i==0) ) {	
			printf("%d ", i);
			result = i;
		}	
	}
	printf("\n - Uoc so chung lon nhat = %d", result);
	
	for ( i = 1 ; i<=a || j<=b ; i++){
		for ( j=1 ; j<= a || j<= b ; j++){
			if ( (a*i) == (b*j) ){
				result2 = a*i ;
				k++;
			}
		}
		if ( k != 0){
			break;
		}
	}
	printf("\n\n - Boi so chung nho nhat = %d", result2);
	getch();
	goto Top;
}


//void main(){
//	int i, j, a=20,b=10, result, k;
//	for ( i=1 ; i<=a ; i++){
//		k=0;
//		for ( j=1 ; j<=b ; j++){
//			if ( a*i == b*j ){
//				printf("%d ", a*i);
//				k++;
//			}
//		}
//		if (k != 0){
//			break;
//		}
//	}
//}
