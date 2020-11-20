/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: staff management max 50 students, 
					using input name, year, address, score.
					sort and find the lowest salary.
*/

#include <stdio.h>
#include <string.h>
struct student {
	char name[30], address[100];
	int year, salary;
}student[100], temp;

int main(int argc, char const *argv[])
{
	char ans[5];
	int n=0, i, max;

	do {
		printf("\n--- student [%d] ---\n", n+1);
		printf("Enter name : ");
		scanf("%s", student[n].name);
		printf("Enter year of birth : ");
		scanf("%d", &student[n].year);
		printf("Enter address : ");
		fflush(stdin);
		scanf("%s", student[n].address);
		printf("Enterl salary : ");
		scanf("%d", &student[n].salary);
		printf("\nDo you want to add more student (Yes/No) ? : ");
		fflush(stdin);
		scanf("%s", ans);
		if (strcmp(ans, "No")==0) break;
		n++;
	} while ( n<100);
	n++;

	printf("\n\nSort the list \n");
	for (int i = 0; i < n-1; ++i) 
		for (int j = i+1; j < n; ++j)
			if ( student[i].year < student[j].year ) {
				temp = student[i];
				student[i]= student[j];
				student[j]=temp;
			}
	
	for (int i = 0; i < n; ++i) {
			printf("%-20s %-4d %-20s %2d \n", student[i].name, student[i].year, student[i].address, student[i].salary ) ;
	}

    // find the lowest score in the class 
    printf("\n\nThe lowest salary in the class : \n");
	max = student[0].year;
	for (int i = 1; i < n; ++i) {
		if (max > student[i].year)
			max = student[i].year;
	}
	
	for (int i = 0; i < n; ++i) {
		if (max == student[i].year)
			printf("%-20s %2d \n", student[i].name, student[i].salary ) ;
	}
	
	return 0;
}