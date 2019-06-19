#include <stdio.h>
#define MAX 100

int x[MAX];
int n,M;
int cnt;
int T;
bool check(int v, int k){
	if(k == n) return T + v == M;
	return true;	
}
void solution(){
	cnt++;
	printf("Solution %dth: ",cnt);
	for(int i = 1; i <= n; i++) printf("%d ",x[i]);
	printf("\n");
}
void TRY(int k){// thu gia tri cho x[k] khi da biet x[1,...,k-1]
	int v;	
	for(v = 1; v <= M-T-n+k; v++){
		if(check(v,k)){
			x[k] = v;
			T = T + v;// cap nhat gia tang
			if(k == n) solution();
			else TRY(k+1);
			T = T - v;// khoi phuc khi quay lui
		}
	}	
}

int main(){
	n = 5;
	M = 6;
	T = 0;
	cnt = 0;
	TRY(1);
}

