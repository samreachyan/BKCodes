#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *f ;
	int i, a[10], b[10];

	for (int i = 0; i < 10; ++i)	{
		printf("\na [ %d ] = ",i);
		scanf("%d", &a[i]);
	}

	// create and open file, copy a into file.
	f = fopen("songuyen.txt" , "w");
	fwrite(a, sizeof(a), 1, f);
	fclose(f);

	// open file and data in file copy into b
	f = fopen("songuyen.txt", "r");
	fread(b, sizeof(a), 1, f);
	fclose(f);

	printf("\nDay so doc duoc la : ");
	for (int i = 0; i < 10; ++i)
	{
		printf(" %d,",b[i]);
	}
	return 0;
}