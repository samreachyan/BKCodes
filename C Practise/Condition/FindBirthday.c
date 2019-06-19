#include<stdio.h>
#include<conio.h>

void main(){
	start:
		system ("cls");
	
	int day=0 , ans ;
	char a[]={" 1 3 5 7 \n 9 11 13 15 \n 17 19 21 23 \n 25 27 29 31" };
	char b[]={ " 2 3 6 7 \n 10 11 14 15 \n 18 19 22 23 \n 26 27 30 31"};
	char c[]={ " 4 5 6 7 \n 12 13 14 15 \n 20 21 22 23 \n 28 29 30 31"};
	char d[]={ " 8 9 10 11 \n 12 13 14 15 \n 24 25 26 27 \n 28 29 30 31"};
	char e[]={ " 16 17 18 19 \n 20 21 22 23 \n 24 25 26 27 \n 28 29 30 31"};
	printf("\nFind your birthday*****\n>>If the calenday has your birthday\nPress 0 for No and press 1 for Yes...\n\n");
	
	printf("%s", a);
	printf("\nInput 1 for Yes, it/'s and 0 for No : ");	scanf("%d",&ans);
	if (ans == 1 )
		day += 1;
	
	printf("%s", b);
	printf("\nInput 1 for Yes, it/'s and 0 for No : ");	scanf("%d",&ans);
	if (ans == 1)
		day +=2 ;
	
	printf("%s", c);
	printf("\nInput 1 for Yes, it/'s and 0 for No : ");	scanf("%d",&ans);
	if (ans == 1)
		day +=4 ;
	
	printf("%s", d);
	printf("\nInput 1 for Yes, it/'s and 0 for No : ");	scanf("%d",&ans);
	if (ans == 1)
		day +=8 ;
	
	printf("%s", e);
	printf("\nInput 1 for Yes, it/'s and 0 for No : ");	scanf("%d",&ans);
	if (ans == 1)
		day +=16 ;
	
	printf("\n\nYour birthday day is %d .", day);
	getch();
	goto start;
}
