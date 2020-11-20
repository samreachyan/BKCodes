#include <stdio.h>
#include <ctype.h>
int main()
{
	char word[100];
	int d=0 , i=0 ;
	printf("Nhap xau ky tu : ");
	scanf("%s", word);
	if (word[0] == '\0') printf("Xau rong.");
	else {
		if (!isspace(word[0])) d=1 ;
		i=1;
		while( word[i] != '\0') {
		    if ( ! isspace(word[i-1]) && (! isspace(word[i]))) d++ ;
		    i++;
		}

		printf("Ket qua : %d ", d );
	}
	return 0;
}