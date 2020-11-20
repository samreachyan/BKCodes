#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int i , j , k, row =7;
	
	//printf("Input row number : ");		scanf("%d" , &row);
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
}
