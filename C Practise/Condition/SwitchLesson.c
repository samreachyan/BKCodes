#include<stdio.h>
#include<conio.h>

void main()
{
	back:
		system("cls");
	float a,b,result;
	char choice;
	printf("Input two values in this program.");
	printf("\nEnter a :"); 	scanf("%f",&a);
	printf("Enter b :"); 	scanf("%f",&b);
	
	printf("\n*******Add your choice ( + - * / ) below *******");
	printf("\nYour choice : ");		scanf("%s", &choice);

	switch (choice)
	{
		case '+' :
			result = a + b;
			printf("\nThe result = a + b = %0.2f", result);
			break;
		case '-' :
			result = a - b;
			printf("\nThe result = a - b = %0.2f", result);
			break;
		case '*' :
			result = a * b;
			printf("\nThe result = a * b = %0.2f", result);
			break;
		case '/' :
			result = a / b;
			printf("\nThe result = a / b = %0.2f", result);
			break;
		default :
			printf("\nInvalid value");
			break;
	}
	getch();
	goto back;
} 	
