#include <stdio.h>
#include <string.h>
#include "khmer.h"

int main(int argc, char const *argv[])
{
	top:
		system("clear");

	char username[20] , password[20];
	int count=0;

	gotoxy (15,3);
	printf("***Login System***\n");
	gotoxy (15,4);
	printf("==================\n");

	gotoxy(3,5);
	printf("Enter username : ");
	usr:
	gotoxy(20,5);
	printf("                 ");
	gotoxy(20,5);
	scanf("%s", username);

	gotoxy(3,6);
	printf("Enter password : ");
	psw:
	gotoxy(20,6);
	printf("                ");
	gotoxy(20,6);
	scanf("%s", password);

	if ( strcmp(username,"admin") == 0 ) {
		if ( strcmp(password,"123")==0 ){
			gotoxy(15,8);
			printf("                         ");
			gotoxy(15,8);
			printf("Login successful.\n");
		} else {
			gotoxy(15,8);
			printf("                         ");
			gotoxy(15,8);
			printf("Login unsuccessful.\n");
			count++;
				if (count == 3){
					gotoxy(15,7);
					printf("Input wrong psw 3 times.\n");
					exit(0);
				}
			goto psw;
		}
	} else {
		gotoxy(15,8);
		printf("Login unsuccessful.\n");
		count++;
			if (count == 3){
				gotoxy(15,7);
				printf("Input wrong psw 3 times.\n");
				exit(0);
			}

		goto usr;
	}
	sleep(5);
	goto top;
	return 0;
}