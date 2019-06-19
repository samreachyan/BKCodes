#include<stdio.h>

int main()
{
	/* code */

	// top:
	// 	system("cls");
	int amount , total;
	printf("\n*** Find how much would you spend for electrictity payment ***\n\n");
	printf("\tInput electricity amount : "); 		scanf("%d", &amount);
	
	if ( amount < 100){
		total 	=	amount * 250;
	}
	else if ( amount >= 100 && amount <=500 ){
		total 	= 	amount * 350;
	}
	else{
		total 	= 	amount * 400;
	}
	
	printf("\n\n\tTotal payment for %d kwh is %d Riels.", amount , total);

}
