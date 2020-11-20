/*
	author	: YAN Samreach
	Date 	: 21/12/2018
	Describe: find your last name.
*/

#include <stdio.h>
#include <string.h>

// this function to check 
char *chuanhoa(char *x){
	while (*x == ' ') x = x++ ;
	while (*(x+strlen(x)) == ' ' ) x = x++ ;
	return x;
}

int main(int argc, char const *argv[])
{
	char t[30], *s, *p;
	
	printf("Nhap vao mot xau ho va ten : ");
	scanf("%[^\n]", t);

	s = chuanhoa(t);

	p = strrchr(s , ' ');
	p = p + 1; 

	printf("\nPhan ten la : %s " ,p);
	return 0;
}