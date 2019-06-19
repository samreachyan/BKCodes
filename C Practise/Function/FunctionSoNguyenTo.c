#include<stdio.h>
#include<conio.h>

//int periodnumber(int n){
//	int i,j;
//	for (i=2 ; i<=n ; i++){
//		int k=0;
//		for ( j=2 ; j<i; j++){
//			if ( i%j == 0){
//				k=1;
//				break;
//			}
//		}
//		if ( k==0){
//			printf("%d ", i);
//		}
//	}
//	
//}
//void main(){
//	int n;
//	printf("Enter number n times : ");
//	scanf("%d",&n);
//	periodnumber(n);
//}

/////

int SoNguyenTo(int n){
	int i=0 , k=0 ;
	for (i=1 ; i<=n ; i++){
		if (n%i == 0 ) k++;
	}
	if (k>2) 
		return 0;
	else 
		return 1;
}
void main(){
	int a, i;
	printf("Input a : ");
	scanf("%d",&a);
	for ( i=2 ; i<=a; i++){
		if (SoNguyenTo(i))	printf("%d ", i);
	}
	getch();
}
