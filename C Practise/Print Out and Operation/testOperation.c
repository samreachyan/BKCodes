//#include<stdio.h>
//#include<conio.h>
//#include<windows.h>
//
//void gotoxy(short col, short row)
//{
//HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
//COORD position={col,row};
//SetConsoleCursorPosition(h,position);
//}
/////////////////////////////////////////////////////////////////
//void main()
//{
//	int a=5,b=2;
//	//a += b;
//	a=a+b;
//	
//	gotoxy (40,13);
//	printf("Result is %d", a);
//	getch(); 
//}

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
	float a, b, c, x1, x2, x, xdouble, delta;
	start:
		system("cls");	
	printf("\nSolve problem qualtion ax2 +bx +c = 0\n");
	printf("Input value a: ");	scanf("%f",&a);
	printf("Input value b: ");	scanf("%f",&b);
	printf("Input value c: ");	scanf("%f",&c);
	if (a==0){
		x=-c/b;
		printf("There is a root x = %0.2f", x);
	}
	else {
		delta = sqrt (b*b - 4*a*c);
		if ( delta == 0 ){
			xdouble = -b/a;
			printf("There is a double root x =%0.2f", xdouble);
		}
		else if ( delta > 0 ) {
			x1= ( -b + delta )/2*a;
			x2= ( -b - delta )/2*a;
			printf("There are two roots x1 =%d and x2 =%d",x1, x2);
		}
		else {
			printf("There is no root....!!");
		}
	}
	getch();
	goto start;
} 
