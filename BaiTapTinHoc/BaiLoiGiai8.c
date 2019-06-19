#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n=0 , i, sl=0 , a[100];
	char s[5];

	do
	{
		printf("Nhap vao so thu %d : ", n+1);
		scanf("%s",s);
		if (isalpha(s[0])) break;
		a[n] = atoi (s);  // atoi() is convert form String Number to Integer. remove character and number after character also remove.
		n++ ;
	} while ( n<100 );

	printf("\nCac so thoa man dieu kien bang so dung truoc cong 3 la : \n");

	for (int i = 0; i < n; ++i)
		if (a[i] == (a[i-1]+3) ){
			sl++ ; 
			printf("%d  ", a[i] );
		}
	printf("\nSo luong cac so thoa man dieu kien la : %d", sl);

	return 0;
}