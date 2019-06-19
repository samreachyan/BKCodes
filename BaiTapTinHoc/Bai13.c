/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: Fine the longest word in n string input by user.
*/

#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char word[50][50], longstring[50], max[50];
	int n, index, mac[50];
	printf("\nEmter n string : ");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		printf("Enter word [%d] : ", i+1);
		fflush(stdin);
		scanf("%s", word[i]);
	}

	for (int i = 0; i < n; ++i) {
		strcpy(longstring, word[i]);
		mac[i] = strlen(longstring);
	}

	for (int i = 1; i < n; ++i) {
		if (mac[0] < mac[i]){
			index = i;
			mac[0] = mac[i];
		}
	}

	printf("\n\nThe longest word in the string has %d characters at position %d.\n That is \" %s \"\n", mac[0], index+1, word[index]);
	return 0;
}