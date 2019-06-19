#include <stdio.h>

int n ;
int x[1000];
void solution(){
	for (int k = 0; k < n; ++k)
	{
		printf("%d ",x[k] );
	}
	printf("\n");
}

int TRY(int k){
	for (int v = 0; v <= 1; ++v){
		x[k] = v;
		if (k == n-1) solution();
		else TRY(k+1);
	}
}

int main(int argc, char const *argv[])
{
	printf("Enter n : ");
	scanf("%d", &n);
	TRY(0);
	return 0;
}