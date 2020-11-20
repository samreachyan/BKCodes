#include<stdio.h>
#include<conio.h>
//int sum( int n, int m);
void main(){
	int a,b;
	printf("Enter a : "); 	scanf("%d",&a);
	printf("Enter b : "); 	scanf("%d",&b);
	
	printf("\n a + b = %d" , sum(a,b) );
	printf("\n a - b = %d" , sub(a,b) );
	printf("\n a * b = %d" , nhan(a,b) );
	printf("\n a / b = %d" , devide(a,b) );
	getch();
}
int sum( int n, int m){
	return n+m;
}
int sub( int n, int m){
	return n-m;
}
int devide( int n, int m){
	return n/m;
}
int nhan( int n, int m){
	return n*m;
}
