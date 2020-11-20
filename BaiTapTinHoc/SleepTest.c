#include<stdio.h>
#include<unistd.h>
#include<stdlib.h> // gotoxy function // system("clear")


void gotoxy(int x,int y)
 {
 printf("%c[%d;%df",0x1B,y,x);
 }

int main(int argc, char const *argv[])
{
	
	sleep(1);
	printf("Test sleep time for me\n");
	gotoxy(2,3);
	printf("Time is run : \n");

	// system("clear");

	for (int i=0 ; i<10 ; ++i){
		gotoxy(20,3);
		printf("%d\n", i);
		sleep(1);
	}
	printf("You wasted your times.");
	return 0;
}