#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char St[100];
	int d=0 , i=0;
	printf("Nhap xau ky tu : ");
	//scanf("%s", St);
	 fflush(stdin);
	gets(St);
	if (St[0] =='\0') printf("Xau rong ");
	else {
		if ( !isspace(St[i]) ) d=1; 
		i=1 ;
		while( St[i] != '\0') {
		    if ( isspace(St[i-1]) && (!isspace(St[i])) ) 
		    	d++;
		    i++ ;
		}
	}
	printf("Ket qua : %d \n", d );
	return 0;
}