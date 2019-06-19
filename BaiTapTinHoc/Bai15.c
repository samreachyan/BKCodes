#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char word[51], reverse[51];
	int i=0, n;

	do {
		printf("\nEnter word : ");
		scanf("%[^\n]", word);
	} while ( strlen(word) > 50);
	printf("%s\n",word );
	n = strlen(word);
	do {
		
		i++;
	} while ( i < n);

	printf("%s\n", reverse);

	return 0;
}