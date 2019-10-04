#include <stdio.h>
#define MAX 100

int m[MAX][MAX];// m[k][n] luu gia tri cua C(k,n)

int f(int n){
	if(n == 1) return 1;
	return f(n-1) + n;
}
int C(int k, int n){
	if(k == 0 || k == n){ 
		m[k][n] = 1;
	}else{
		if(m[k][n] < 0)
 			m[k][n] = C(k-1,n-1) + C(k,n-1);
	}
	return m[k][n];
}

int main(){
	for(int i = 0; i < MAX; i++)
		for(int j = 0; j < MAX; j++) 
			m[i][j] = -1;

	int k = 19;
	int n = 29;
	printf("C(%d,%d) = %d\n",k,n,C(k,n));
}
