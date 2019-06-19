#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,b,c,d ;
	int k=0;

	printf("\nCac gia tri thoa man la : ");
	printf("\na b c d\n\n");
	for (a =1 ; a<=9 ; a++){
		for (b=1 ; b<=9 ; b++){
			for (c=1 ; c<=9 ; c++){
				for (d=1 ; d<=9 ; d++) {
					if (a*d*d == b*c*c*c) {
						k++;
						if (k>5)
							break;
						printf("\n%d %d %d %d ",a,b,c,d );
					}
				}
			}
		}
	}
	return 0;
}