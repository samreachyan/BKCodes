/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: 
*/
#include<stdio.h>

int doubleFactorial (int n){
	if (n==1 || n==0)
		return 1;
	return n*doubleFactorial(n-2);
}

int main(int argc, char const *argv[])
{
	int n;
	printf("Nhap vao so n : ");
	scanf("%d", &n);
		
	printf("\n\nThe result of double factorial %d = %d ", n , doubleFactorial(n));
	return 0;
}