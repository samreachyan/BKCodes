#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<time.h>

#define Pi 3.14


void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

void foreColor(int color){
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle,color|FOREGROUND_INTENSITY);		
}
void gotoxy(int x,int y){
	HANDLE hConsoleOutput;
	COORD coord;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(hConsoleOutput,coord);
}


void main()
{
	start:
		system("cls");
	char name[20]="",pass[20]="";
	int i,j;
	//small border
	gotoxy(24,4);	printf("Welcome Login");
	//delay(200);
	for ( i =0 , j=0 ; i<20 , j<20 ; i++, j++){
		delay(20);
		gotoxy( 20+i , 3);
		printf("%c", 205);	
		gotoxy(20+j , 5);
		printf("%c",205);
	}
	
	gotoxy(19,3); 	printf("%c",213); //up left
	gotoxy(19,4); 	printf("%c",179); //left
	gotoxy(19,5); 	printf("%c",212); //down left
	gotoxy(40,3); 	printf("%c",184); //up right
	gotoxy(40,4); 	printf("%c",179); //right
	gotoxy(40,5); 	printf("%c",190); //down right
	// big border
	for (i=0 ,j=14 ; i<14, j>0 ; j--, i++){
		delay(20);
		gotoxy(5+i,4);	printf("%c",196);//left
		gotoxy(40+j,4);	printf("%c",196);//right
	//complete corner
		gotoxy(4,4); 	printf("%c",218); //up left
		gotoxy(55,4); 	printf("%c",191); //up right
	}

	for (i=0 ,j=0; i<13 , j<13 ; i++,j++){
		delay(10);
		gotoxy(4,5+i);		printf("%c",179);//down left
		gotoxy(55,5+i);		printf("%c",179); //down right
	//complete corner
		gotoxy(4,18); 	printf("%c",192); //down left
		gotoxy(55,18); 	printf("%c",217); //down right

	}
	
	for (i=0 ; i<50 ; i++){
		delay(10);
		gotoxy(5+i,18);		printf("%c",196); //buttom down
	}
	
	login:
	delay(50);
	gotoxy(10,8);	printf("Username : "); 
	delay(50);
	gotoxy(10,12);	printf("Password : ");	
	gotoxy(22,8);	scanf("%s",&name);	
	gotoxy(22,12);	scanf("%s",&pass);
	
		if ( strcmp(name,"admin")==0 && strcmp(pass,"123")==0 ) {
			gotoxy(17,15);	printf("Login successful >> ENTER >>");	
			getch();
			
			top:
				system("cls");
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
			printf("6. Sign out \n");
			printf("7. Exit program\n");
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
					goto start;
				case 7:
					exit(0);
					break;
				default:
					printf("Invalid choices...!!");
				}
				getch();
				goto top;
				}
		
	else
	{
		gotoxy(23,15);	printf("Login Incorrect!");
		getch();
		goto start;
	}
		
	getch();
}
