#include <stdio.h>

int count = 0;
void move (int n , char A , char B, char C){
	if (n == 1){
		count++;
		printf("Step %d : Move %c -> %c .\n",count, A, B );
	} else {
		move (n-1 , A, C, B);
		move (1, A, B, C);
		move (n-1, C, B, A);
	}
}

int main(int argc, char const *argv[])
{
	int n = 3;
	move (n, 'A', 'B', 'C');
	return 0;
}