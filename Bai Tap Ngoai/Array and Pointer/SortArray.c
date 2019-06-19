#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 10 
int main(int argc, char const *argv[])
{
	int day[n], tem;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		printf("\nNhap vao phan tu a[%d] : ", i);
		//scanf("%d", &day[i]);
		day[i] = rand()%10 ;
		printf("%d", day[i] );
	}
	for (int i = 0; i < n-1; ++i)
		for (int j = 0; j < n; ++j)
			if (day[j] > day[i])
			{
				tem = day[i];
				day[i] = day[j];
				day[j] = tem;
			}
	printf("\nSau khi sap xep : \n");
	for (int i = 0; i < n; ++i)
		printf("%d ", day[i]);

	return 0;
}