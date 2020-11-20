#include<stdio.h>
//#include<conio.h>
int main(){
	char word;
	int value;
	
	printf("Input a character : ");
	scanf("%c", &word);
	
	value = (int)word; // convert from character into value 
	
	if (value >= 65 && value <= 90){
		printf("\nChange the character from << %c >> to << %c >>." , word, value+32);
	}
	else if ( value >= 97 && value <= 122){
		printf("\nChange the character from << %c >> to << %c >>." , word, value-32);
	}
	else if ( value >= 48 && value <= 57 ){
		printf("\nDont change into any character << %c >>" , value);
	}
	/*else{
		exit(0);
	}*/
	//getch();
}
