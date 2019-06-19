#include<stdio.h>
#include<conio.h>
#include<math.h>

//void main()
//{
//	float R1, R2, R3;
//	float R, Rfinal;
//	printf(" Find resitan R\n\n");
//	printf("Input value R1 : ");	scanf("%f",&R1);
//	printf("Input value R2 : ");	scanf("%f",&R2);
//	printf("Input value R3 : ");	scanf("%f",&R3);
//	R=(1/R1)+(1/R2)+(1/R3);
//	Rfinal=1/R;
//	printf("\n\nTotal R = %f",Rfinal);
//}




//void main(){
//	
//	char word;
//	printf("How to change the word (A-Z)\n");
//	printf("Enter the word : ");	scanf("%c",&word);
//	printf("\nThe result is %c", word+32);
//}

#define PI 3.1416 
void main()
{
	float S, R;
	printf("\nInput value of Radius (R): ");	scanf("%f",&R);
	S=PI*R*R;
	printf("\nThe Result is %0.3f m2.",S);
	getch();

}
