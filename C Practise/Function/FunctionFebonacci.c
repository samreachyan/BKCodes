#include<stdio.h>
#include<conio.h>

int F(int n){
	if (n==0 || n==1)
		return 1;
	else 
		return (F(n-1)+F(n-2));
}

void main()
{
	int n;
	printf("Recusive function\n");
	printf("Input value F(n) of n = ");
	scanf("%d", &n);
	printf("Function of Febonacci F(%d) = %d",n,F(n));
	getch();
}
