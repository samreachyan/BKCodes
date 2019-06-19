#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int a, b, lcm, max, step;
	printf("Nhap so thu nhat : ");
	scanf("%d", &a);
	printf("Nhap so thu hai : ");
	scanf("%d", &b);

	if(a > b)
      max = step = a;
   else
      max = step = b;

   while(1) {
      if(max%a == 0 && max%b == 0) {
         lcm = max;
         break;    
      }
      max += step;
   }

	printf("\nBoi so nho nhat cua hai so la %d ", lcm);
	return 0;
}
