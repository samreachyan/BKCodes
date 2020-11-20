#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int a, b;
	printf("Nhap so thu nhat : ");
	scanf("%d", &a);
	printf("Nhap so thu hai : ");
	scanf("%d", &b);

	while(a != b) {
	    if (a > b) a = a - b ; 
	    else b = b - a ;
	}

	printf("\nUoc so lon nhat cua hai so la %d ", a);
	return 0;
}