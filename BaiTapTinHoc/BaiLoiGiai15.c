#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int c ;
	char t1[25], t2[25];
	FILE *f1, *f2;

	printf("\nTEP Nguon : ");
	scanf("%s", t1);
	printf("\nTEP DICH : ");
	scanf("%s", t2);

	f1 = fopen(t1 , "rb");
	if (f1 == NULL) {
		printf("\nTEP %s Khong ton tai.", t1);
		exit(0);
	}
	f2 = fopen(t2, "wb");
	while ((c=fgetc(f1)) != EOF )	fputc(c, f2);
	fclose(f1);
	fclose(f2);

	printf("\nDa so chep la xong.\n");

	return 0;
}