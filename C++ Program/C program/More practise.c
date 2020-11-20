#include<stdio.h>
void main()
{
	int b;
	char a[20];
	
	printf("Please input int:");
	scanf("%d",&b);
	
	printf("Please input string:");	
	gets(a);
	printf("\nSo you had input value is %s", a);
	
}
