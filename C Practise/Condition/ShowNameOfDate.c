#include<stdio.h>	
#include<conio.h>	
void main(){
	int number;	
	printf("Input value number between 1 - 7 : ");
	scanf("%d" , &number);
	switch(number){
		case 1:
			printf("It is Monday. ");
			break;
		case 2:
			printf("It is Tuesday. ");
			break;
		case 3:
			printf("It is Wednesday. ");
			break;
		case 4:
			printf("It is Thursday. ");
			break;
		case 5:
			printf("It is Friday. ");
			break;
		case 6:
			printf("It is Saturday. ");
			break;
		case 7:
			printf("It is Sunday. ");
			break;
		default:
			printf("Error !! ");
	}
	getch();
}
