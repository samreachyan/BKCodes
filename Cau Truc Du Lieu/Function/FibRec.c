#include <stdio.h>

int FibRec (int n){
	if (n<=1)	return n;
	else	return FibRec(n-1) + FibRec(n-2);
}

int FibIter(int n){
	int f1, f2, f3;
	if(n<=1)	return n;
	else {
		f1 = 0;
		f2 = 1;
		for (int k = 2; k <= n; ++k)
		{
			f3 = f1+f2;
			f1 = f2;
			f2 = f3;
		}
		return f3;
	}
}


int main(int argc, char const *argv[])
{
	for (int i = 1; i < 15; ++i)
		printf("%d\n", FibRec(i));
	printf("--------- Cach 2\n");
	for (int i = 1; i < 15; ++i)
		printf("%d\n", FibIter(i));

	return 0;
}