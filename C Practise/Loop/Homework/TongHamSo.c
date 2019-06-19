#include<stdio.h>
#include<conio.h>

// 1+3+5+7+...+ 2*n+1

//void main(){
//	int n ,i , sum=0 ;
//	do{
//		printf("\nNhap vao so n : ");
//		scanf("%d", &n);
//	} while (n<=0 || n>=100 );
//	
//	for ( i=0 ; i<=n ; i ++){
//		printf("%d+", 2*i+1);
//		sum += 2*i+1;
//	}
//	printf("\b = %d ", sum);
//	getch();
//}

// 2+4+6+...+ 2*n

//void main(){
//	int n,i ,sum=0;
//	printf("Nhap vao so n = ");
//	scanf("%d", &n);
//	
//	for ( i=1 ; i<=n ; i++){
//		printf("%d+", 2*i);
//		sum += 2*i;
//	}
//	printf("\b = %d ", sum);
//	getch();
//}


// Tinh tong so nguyen to cua 1- 50

void main(){
	int i ,j , n, sum=0;
	printf("So nguyen to giua [1-50] \n\n");
	for ( i=2 ; i<=50 ; i++){
		int k=0;
		for ( j=2 ; j<i ; j++ ){
			if ( i%j==0){
				k=1;
				break;
			}
		}
		if(k==0){
			printf("%d ",i);
			sum +=i ;
		}
	}
	printf("\n\nTong cua so nguyen to tren = %d", sum);
	getch();
}
