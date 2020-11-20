#include<stdio.h>
void main()
{
	int i,j,n, result=0;
	printf("Nhap vao so nguyen n :"); 	scanf("%d",&n);
	printf("Tim so nguyen to trong %d co :\n\n>> ", n);
	for (i=2 ; i<=n ; i++ ){
		int kg=0 ;
		for ( j=2 ; j<i ; j++){
			if ( i%j ==0 ){
				kg=1;
				break;
			}
		}
		if ( kg==0){
			printf("%d ",i);
			result += i;
		}
	}
	printf("\n\n Tong so nguyen to = %d", result);
	getch();
}
