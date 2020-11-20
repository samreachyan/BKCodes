#include <stdio.h>
#define MAX 100

int x[MAX];
int n,M;
int cnt;
int T;

bool m[MAX];// mang danh dau: m[v] = true (v da xh), m[v] = false (v chua xh)

bool check(int v, int k){
	return !m[v];	
}

void solution(){
	cnt++;
	printf("Solution %dth: ",cnt);
	for(int i = 1; i <= n; i++) printf("%d ",x[i]);
	printf("\n");
}

void TRY(int k){// thu gia tri cho x[k] khi da biet x[1,...,k-1]
	int v;	
	for(v = 1; v <= n; v++){
		if(check(v,k)){
			x[k] = v;
			m[v] = true;// danh dau
			
			if(k == n) 
				solution();
			else 
				TRY(k+1);

			m[v] = false;// khoi phuc khi backtrack
		}
	}	
}

int main(){
	n = 3;
	cnt = 0;
	for(int v = 1; v <= n; v++) m[v] = false;
	TRY(1);
}