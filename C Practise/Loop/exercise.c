#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j, n;
	printf("Nhap so nguyen n vao : "); 	scanf("%d", &n);
	
	for ( i=2; i<= n; i++)
     {
        int prime = 1;
        for ( j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime == 1) {
        	printf("%d ",i);
		}
      }
	getch();
}
