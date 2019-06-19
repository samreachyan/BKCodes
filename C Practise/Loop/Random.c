#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

void main(){
	srand(time(NULL));
	int r = rand()%20;
	printf("%d", r);
	getch();
}
