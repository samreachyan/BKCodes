#include<stdio.h>
#include<conio.h>

void nghiem(float a, float b){
	if( a==0 )
		return	printf("\nPhuong trinh khong co nghiem.");
	else
		return	printf("\nSo nghiem la %0.2f", -b/a);
}

void main(){
	float a, b;
	printf("Tim nghiem phuong trinh ax + b = 0");
	printf("\nInput a = ");
	scanf("%f", &a);
	printf("Input b = ");
	scanf("%f", &b);
	nghiem(a,b);
}
