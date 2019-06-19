#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int x[MAX];
int n;
int cnt;

void printHTML(char* fi){
	FILE* f = fopen(fi,"w");
	fprintf(f,"<table border = 1>\n");
	for(int i = 1; i<=n;i++){
		fprintf(f,"<tr>\n");
		for(int j = 1; j <= n; j++){
			if(x[j] == i)
				fprintf(f,"<td width = 40px height = 40px bgcolor='red'>");
			else			
				fprintf(f,"<td width = 40px height = 40px bgcolor='blue'>");
			fprintf(f,"</td>");
		}
		fprintf(f,"</tr>\n");
	}
	fprintf(f,"</table>");
	fclose(f);
}

void solution(){
	cnt++;
	//for(int i = 1; i <= n; i++) printf("%d ",x[i]); printf("\n");
	printf("solution %d\n",cnt);	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(x[j] == i) printf("1 "); else printf("0 ");
		}
		printf("\n");
	}
	printHTML("queen.html"); // with my linux compile error but I can run in chrome to show the last solution.
}
bool check(int v, int k){
	// da biet x[1,2,...,k-1], x[k] = v?
	for(int j = 1; j <= k-1; j++){
		// kiem tra x[j] va x[k]
		if(x[j] == v) return false;
		if(x[j] + j == v + k) return false;
		if(x[j] - j == v - k) return false;
	}
	return true;
}
void TRY(int k){
	for(int v = 1; v <= n; v++){
		if(check(v,k)){
			x[k] = v;
			if(k == n) solution();
			else TRY(k+1);
		}
	}
}
int main()
{
	printf("\nEnter n : ");
	scanf("%d", &n);

	printf("\n====== Result ======\n");
	cnt = 0 ;
	TRY(1);
	if (cnt == 0);	printf("NO Soluttion!!!\n");

}