#include <stdio.h>
#include <stdlib.h>
#define MAX_L 1000000

int n;
int a[MAX_L];
int p[MAX_L];
int S[MAX_L];


void readFILE(){
	FILE * f = fopen("incseq.txt", "r");
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; ++i){
		fscanf(f, "%d", &a[i]);
	}
	fclose(f);
}

void trace(int i){
	if (p[i]==i){
		printf("%d ", a[i] );
		return;
	} 
		trace(p[i]);
		printf("%d ", a[i] );
}

void solve(){

	S[0] = 1;
	int ans = S[0];
	int i_max = 0;
	printf("S[%d] = %d\n",0, S[0] );

	for (int i = 1; i < n; ++i) {
		S[i] = 1;
		p[i] = i;
		for (int j = i-1; j >= 0 ; --j)	
			if (a[j] < a[i]){
				if (S[i] < S[j]+1){
					S[i] = S[i] + 1;
					p[i] = j;
				}
			}
		printf("S[%d] = %d\n",i, S[i] );
		if (ans < S[i]) {
			ans = S[i];
			i_max = i;
		}

	}
	printf("answer = %d\n", ans);
	printf("\n\n\n");
	trace(i_max);
}

int main()
{
	readFILE();
	solve();
	return 0;
}