#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c ,max;
	printf("Input a,b,c : ");
	scanf("%d %d %d", &a,&b,&c);
	
	max = a>b ? a:b;
	max = max>c ? max:c ;
	printf("The greatest value is %d", max);
}
