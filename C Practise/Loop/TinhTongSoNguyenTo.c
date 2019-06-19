#include<stdio.h>
#include<conio.h>
void main(){
	int i, j , sum = 5;
	printf("Tinh tong so nguyen to [1-50] ");
	for ( i=4 ; i<=50 ; i++){
		int ketqua =1;
		for ( j=2 ; j<i ; j++){
			if ( i%j ==0 ){
				ketqua = 0 ;
				break;
			}
		}
		if (ketqua ==1 ){
			sum += i;
		}
	}
	printf("\n\n Tong la %d ", sum);
	getch();
}
