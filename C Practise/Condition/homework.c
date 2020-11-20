#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<khmerheader.h>
#define Pi 3.14


void main()
{
	top:
		cls();
	float a,b,c,p,h,r,dientich_vuong;
	int choice;
	foreColor(5);
	printf("--------- MENU --------\n");
	foreColor(7);
	printf("1. Hinh vuong\n");
	printf("2. Chu nhat\n");
	printf("3. Tam giac\n");
	printf("4. Hinh thang\n");
	printf("5. Hinh Tron\n");
	printf("6. Exit program\n");
	foreColor(8);
	printf("Enter your choice :");	
	foreColor(6);
	scanf("%d",&choice);
	printf("\n------------------------------\n");
	foreColor(2);
	switch(choice)
	{
		case 1:
			printf("Input value a :"); 		scanf("%f",&a);
			dientich_vuong=a*a;
			printf("Dien tich la %0.2f",dientich_vuong);
			break;
		case 2:
			printf("Input value a :"); 		scanf("%f",&a);
			printf("Input value b :"); 		scanf("%f",&b);
			dientich_vuong=a*b;
			printf("Dien tich la %0.2f",dientich_vuong);
			break;
		case 3:
			printf("Input value a :"); 		scanf("%f",&a);
			printf("Input value b :"); 		scanf("%f",&b);
			printf("Input value c :"); 		scanf("%f",&c);
			if ((a+b)>c && (a+c)>b && (b+c)>a)
			{
				p=(a+b+c)/2;
				dientich_vuong=sqrt(p*(p-a)*(p-b)*(p-c));
				printf("Dien tich la %0.2f",dientich_vuong);
			}
			else
			{
				printf("No khong phai la tam giac.");
			}
			break;
		case 4:
			printf("Input value a :"); 		scanf("%f",&a);
			printf("Input value b :"); 		scanf("%f",&b);
			printf("Input value h :"); 		scanf("%f",&h);
			dientich_vuong=(a+b)*h/2;
			printf("Dien tich la %0.2f",dientich_vuong);
			break;
		case 5:
			printf("Input value r :"); 		scanf("%f",&r);
			dientich_vuong=Pi*r*r;
			printf("Dien tich la %0.2f",dientich_vuong);
			break;
		case 6:
			exit(0);
			break;
		default:
			printf("Invalid choices...!!");
	}
	getch();
	goto top;
}
