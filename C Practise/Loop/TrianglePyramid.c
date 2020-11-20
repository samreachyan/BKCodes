#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	Top:
		system("cls");
	int i , j , k, row ;
	printf("Input row number : ");		scanf("%d" , &row);
	for ( j=1 ; j<=row ; j++){
		for ( i = row-j;  i>0 ;  i-- ){
			printf("   ");
		}
		//
		for ( i = j ; i>0 ; i --){
			printf("%3d",i);
		}
		//
		for ( i=1 ; i<j ; i++){
			printf("%3d",i+1);
		}
			printf("\n");
	}

	printf("\n\n"); 	// this is the second triangle

	for ( j=1 ; j<=row ; j++){
		int k=0,a =2, number;
		for ( i = row-j;  i>0 ;  i-- ){
			printf("   ");
		}
		//
		for ( i = j ; i>0 ; i --){
			number=pow(a,k);
			printf("%3d", number );
			k++;
		}
		//
		for ( i=1 ; i<j ; i++){
			number = pow ( a, j-i-1);
			printf("%3d",number);
		}
			printf("\n");
	}
	getch();
	goto Top;
}
