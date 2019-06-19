#include<stdio.h>
#include<conio.h>

void main()
{
	int math, khmer, history , total;
	float medium;
	printf("Input Math score : "); scanf("%d", &math);
	printf("Input Khmer score : "); scanf("%d", &khmer);
	printf("Input History score : "); scanf("%d", &history);
	total=math+khmer+history;
	medium=total/3;
	printf("\n\nTotal score is %d and medium score is %0.2f", total, medium); //
	getch();

}
