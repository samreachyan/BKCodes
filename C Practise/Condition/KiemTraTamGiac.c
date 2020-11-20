#include<stdio.h>
#include<conio.h>

void main() {
	int a,b,c;
	printf("Input value a , b, c :\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if ( (a+b)>c || (a+c)>b || (b+c)>a )
	{
		printf("Value a b c is Triangle.");
		if ( a==b && b==c )
		{
			printf("\nNo la tam giac deu");
		}
		else
		{
			printf("\n No la tam giac can.");
		}
	}
	else {
		printf("Khong phai la tam giac.");
	}
}
