#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#define MAX 10000000

using namespace std;

int a[MAX];
int n;

void readData(char* filename){
	FILE* f=  fopen(filename,"r");
	fscanf(f,"%d",&n);
	for(int i = 0; i < n; i++){
		fscanf(f,"%d",&a[i]);
	}
	fclose(f);
}
void printData(){
	printf("%d\n",n);
	for(int i = 0; i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void genData(char* filename, int n){
	FILE* f = fopen(filename,"w");	
	fprintf(f,"%d\n",n);
	srand(time(NULL));
	for(int i = 0; i < n; i++){
		int x = 50 - rand()%100;
		fprintf(f,"%d ",x);
	}
	fclose(f);
	
}

void algo1(){
	int max = -99999999;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			int t = 0;
			for(int k = i; k <= j; k++) t = t + a[k];
			max = max < t ? t : max;
		}
	}
	printf("algo1, result = %d\n",max);
}
void algo2(){
	int max = -99999999;
	for(int i = 0; i < n; i++){
		int t = 0;
		for(int j = i; j < n; j++){
			t = t + a[j];
			max = max < t ? t : max;
		}
	}
	printf("algo2, result = %d\n",max);
}
void algo4(){
	int max = -99999999;
	int S = a[0];
	for(int i = 1; i < n; i++){
		S = S > 0 ? S + a[i]: a[i];
		max = max < S ? S : max;
	}
	printf("algo4, result = %d\n",max);
}

int main(int argc, char** argv){
	time_t begin,end;
	char* filename = argv[1];
	//n = atoi(argv[2]);
	//genData(filename,n);
	
	readData(filename);
	//printData();
	

	time(&begin);
	//algo1();
	//algo2();
	algo4();
	time(&end);
	double t = difftime(end,begin);
	printf("time = %lf\n",t);	
}
