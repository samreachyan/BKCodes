#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	int i, count[26], n=0, space=0, dem=0;
	char word[150];

	do
	{
		/* code */
		printf("\nNhap xau ky tu : ");		
		scanf("%[^\n]", word);
		n = strlen(word);
	} while ( n > 100);
	// count word in the string
	if (word[0] == '\0') printf("\nXau rong");
	else {
		if ( !isspace(word[0])) dem=1;
		i=1 ;
		while (word[i] != '\0'){
			if ( !isspace(word[i-1]) && !isspace(word[i])) dem++ ; 
			i++ ;
		}
	}

	for (int i = 0; i < 26; ++i) count[i] = 0 ;

	// count character in the string
	for (int i = 0; i < n; ++i) {
		if (isalpha(word[i])) count[ tolower(word[i])-'a' ] ++ ;
		if (word[i] == ' ') space ++;
	}

	// display
	printf("\n*****************************\n");
	for (int i = 0; i < 26; ++i)
		if (count[i] != 0)
			printf("\nCharacter %c display %d times.", i+'a', count[i]);
		
	printf("\nAnd space display %d times.", space);
	printf("\nThere are %d words above." ,dem);

	return 0;
}