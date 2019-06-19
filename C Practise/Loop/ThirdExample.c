#include<stdio.h>
#include<conio.h>
void main(){
	int i , a, b ,number , boi; 
	
	printf("Nhap so a : "); 	scanf("%d", &a);
	printf("Nhap so b : "); 	scanf("%d", &b);
	
	// this is the algorithsm on YouTube researcher and change the algorithsm below.
	
	for ( i =1 ; i<=a && i<=b ; i++){
		if (a%i==0 && b%i==0)
			number=i;
	}
	boi = (a*b)/number;
	printf("Boi so chung nho nhat cua la %d." ,boi);
	getch();
	
	// this is the algorithsm of Bro Samean.
	
//	for ( i=1 ; i<a*b ; i++){
//		if ( i*a%b==0 ){
//			printf("%d", i*a);
//			break;	
//		}
//	}
//	getch();
}
