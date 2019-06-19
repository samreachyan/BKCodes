#include<stdio.h>

main()
{
	int n, i, j;
	printf("Nhap vao so nguyen n :"); 	scanf("%d",&n);

	printf("\n\nSo nguyen %d = ",n);
	top:
	for (i=2 ; i<=n ; i++ ){
		int kg=0 ;
		for ( j=2 ; j<i ; j++){
			if ( i%j ==0 ){
				kg=1;
				break;
			}
		}
		if ( kg==0){
			if (n%i == 0){
				n /= i ;
				printf("%d ", i );
				goto top;
			}
		}
	}
	
}