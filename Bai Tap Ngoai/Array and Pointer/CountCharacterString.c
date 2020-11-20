#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char word[100];
	int count[26];
	int i, n;
	printf("\nNhap vao xau ky tu : ");
	scanf("%[^\n]", word);

	for (int i = 0; i < 26 ; ++i) count[i]=0 ;

	n = strlen(word);

	for (int i = 0; i < n; ++i)
		if (isalpha(word[i]))
			count[ tolower(word[i])-'a' ] ++ ;
	
	printf("\n\n============================\n\n");
	
	for (int i = 0; i < 26; ++i)
		if (count[i] != 0)
			printf("Character %c display %d times.\n", i+'a', count[i]);
	return 0;
}