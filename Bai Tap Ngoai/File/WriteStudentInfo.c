#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char name[50];
	int marks, num;

	printf("Enter number of students : ");
	scanf("%d", &num);

	FILE *f;
	f = fopen("students.txt", "w");

	if (f == NULL){
		printf("\nFile ERROR!!!");
		exit(1);
	} else {
		for (int i = 0; i < num; ++i)
		{
			printf("For student %d : \nEnter Name : ",i+1 );
			scanf("%s", name);

			printf("Enter marks : ");
			scanf("%d",&marks);

			fprintf(f, "Name : %s\nMarks : %d\n",name, marks );
		}
	}
	fclose(f);
	return 0;
}