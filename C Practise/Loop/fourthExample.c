#include<stdio.h>
#include<conio.h>

//1. ve hinh chu nhat bang dau *

//void main(){
//	int i , j, row, col;
//	printf("Nhap vao canh row : ");	scanf("%d", &row);
//	printf("Nhap vao canh col : ");	scanf("%d", &col);
//	printf("\n"); 
//	
//	for ( i =0 ; i<row ; i++){
//		for ( j=0 ; j<col; j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	getch();
//}



/* 2. tinh tong binh phuong so le cua  0 < N < 10 */
//void main(){
//	int i , tong =0, n;
//	printf("Tinh tong so binh phuong so le cua N ( 0<N<10 ) ");
//	do {
//		printf("\nNhap vao so N :"); 	scanf("%d", &n);
//	} while ( !(n>0 && n<10) );
//	
//	for (i =0 ; i<=n ; i++){
//		if( i%2 != 0 ){
//			printf(" %d", i*i);
//			tong += i*i ;
//		}
//	}
//	printf("\n\nTong so la %d", tong);
//	getch();
//}


/* 3. Nhap 1 ky tu nao do
    - Neu chu thuong ---> chu HOA
    - Neu chu Hoa ---> chu thuong
    - Neu la con so thi in ra chinh no
    - Neu khac cac dieu kien tren thi dung chuong trinh. */

//void main(){
//	char word; 
//	printf("Nhap vao chu : ");	scanf("%c", &word);
//	if ( word >= 'a' && word <= 'z'){
//		printf("Result : %c", word-32);
//	}
//	else if ( word >= 'A' && word<= 'Z'){
//		printf("Result : %c", word+32);
//	}
//	else if( word >= '0' && word <= '9'){
//		printf("Result : %c", word);
//	}
//	else {
//		return 0;
//	}
//	getch();
//}

/* tinh dan so sau 10 nam, nguoi dan 6000000 va ty le tang 1 nam 1.8% */ 

void main(){
	int i = 0 , num, people = 6000000 ;
	printf(" There are 6 Millions people and increasement rate 1.8 percent ");
	printf("\n Input years : "); 	scanf("%d", &num);
	do {
		people = people * 0.018 + people ;
		printf("\n Year %d there are %d people",i+1 , people);
		i++;
	} while ( i < num );

//	for (i=0 ; i <num ; i ++){
//		people = people * 0.018 + people ;
//		printf("\n Year %d there are %d people",i+1 , people);
//	}
	
	printf("\n\nResult there are %d people in %d years and the increase is %d people. ", people, num, people - 6000000);
	getch(); 
}
