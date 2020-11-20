#include <stdio.h>
#include <stdlib.h>
int main() {
	int choice;
	float a, b, ans;
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Muilticipation\n");
	printf("4. Division\n");
	printf("5. Exit program\n");

	printf("\n\nInput your choice : ");
	scanf("%d", &choice);

	switch(choice){
		case 1:
			printf("\nInput value a : ");
			scanf("%f" , &a);
			printf("\nInput value b : ");
			scanf("%f" , &b);
			printf("\nThe answer = %.0f" , a+b);
			break;
		case 2:
			printf("\nInput value a : ");
			scanf("%f" , &a);
			printf("\nInput value b : ");
			scanf("%f" , &b);
			printf("\nThe answer = %.0f" , a-b);
			break;
		case 3:
			printf("\nInput value a : ");
			scanf("%f" , &a);
			printf("\nInput value b : ");
			scanf("%f" , &b);
			printf("\nThe answer = %.0f" , a*b);
			break;
		case 4:
			printf("\nInput value a : ");
			scanf("%f" , &a);
			printf("\nInput value b : ");
			scanf("%f" , &b);
			printf("\nThe answer = %.3f" , a/b);
			break;
		case 5:
			exit(0);
		default:
			printf("\nInput invalid value.");

	}

	printf("\nThanks you!!!");

	return 0;
}

