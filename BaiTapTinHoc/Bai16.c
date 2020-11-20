#include<stdio.h>

int func (int n);

int main(int argc, char const *argv[])
{
	int n; 
	printf("Nhap vao so thuc n : ");
	scanf("%d", &n);

	printf("\n\nSum of series number  = %d ", func(n) );
	return 0;
}

int func(int n){
	if ( n==1 || n==2 )
		return 1;
	else if ( n >= 3)
		return 4*func(n-1)+3*func(n-2);
}