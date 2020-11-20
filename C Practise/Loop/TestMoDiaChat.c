#include<stdio.h>

main()
{
	int i=0, n, lan=0, so[20], sum=0 ;
	printf("Nhap vao so nuyen duong may lan? :");
	scanf("%d",&n);
	while ( n > 0 && n<=15)
	{
		for (i=0 ; i<n ; i++)
		{
			printf("Nhap so nuyen [%d] : ",i);	scanf("%d",&so[i]);
		}
		break;
	}
	printf("Tong cua day so la : {");
		for (i=0 ; i<n ; i++)
		{
			printf("%d, ",so[i]);
			sum += so[i];
		}
	printf("\b\b} = %d", sum);
}
