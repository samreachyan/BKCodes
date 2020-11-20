#include <stdio.h>

int UC (int a,int b)
{
    while (a!=b)   
    {
        if (a < b)
         b = b -a;
         else
         a = a - b;
         
    }
    return a;
}

int main(int argc, char const *argv[])
{
	unsigned int a, b, c, chung;
	printf("Nhap so thu nhat : ");
	scanf("%d", &a);
	printf("Nhap so thu hai : ");
	scanf("%d", &b);
	printf("Nhap so thu hai : ");
	scanf("%d", &c);

	chung = UC(a, b);
	chung = UC(chung , c);

	printf("\n\nUoc so chung lon nhat la %d", chung);

	return 0;
}