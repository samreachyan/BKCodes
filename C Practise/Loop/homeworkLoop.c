#include<stdio.h>
#include<conio.h>
#include<khmerheader.h>
#define Pi 3.14

//void main()
//{
//	top:
//		system("cls");
//	int i=1,sum=0,n;
//	printf("***** Calculate S=1+2+3+...+n ***** \n\n");
//	printf("Input value n : ");
//	scanf("%d",&n);
//	for (i=1 ; i<=n ; i++)
//		sum += i;
//	printf("\n=> The result S = %d",sum);
//	getch();
//	goto top;
//}

main()
{
	int i,j,k;
	for ( i=0 ; i<21 ; i++)
	{
		printf("* ");
	}
	printf("\n");
	for ( j=0 ; j<5 ; j++)
	{
		printf("\n*\t\t\t\t\t*\n");
	}
	printf("\n");
	for ( i=0 ; i<21 ; i++)
	{
		printf("* ");
	}
	getch();
}

//void main()
//{
//	int i,n=0;
//	for ( i=0 ; i<=100 ; i++)
//		if (i%2==0){
//			n++;
//			printf("%d  ",i);
//		}
//	printf("\nIn this process, there are %d numbers of Odd.",n);
//	getch();
//}

