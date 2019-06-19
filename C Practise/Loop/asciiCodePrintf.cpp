#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	char a='\n';
	
	printf("%d = %c", a,a);
	for ( i=0 ; i<=255 ; i++)
		printf("%c ", i);
	getch();
}
