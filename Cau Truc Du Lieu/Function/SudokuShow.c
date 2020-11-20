#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int count;

int x[9][9];// x[i][j] = gia tri dien vao o (i,j)

bool mr[9][10];// mr[i][v] = T: gia tri v da xuat hien tren hang i
bool mc[9][10];// mc[i][v] = T: gia tri v da xuat hien tren cot i
bool mrc[3][3][10];// mrc[I][J][v] = T: gia tri v da xuat hien tren hinh vuong con (I,J)


// dien ma tran la false hoac la 0 het
void init(){
	for (int i = 0; i < 9; ++i)
		for (int j = 1; j <= 9; ++j)
		{
			mr[i][j] = false;
			mc[i][j] = false;
		}

	for (int I = 0; I < 3; ++I)
		for (int J = 0; J < 3 ; ++J)
			for (int v = 1; v < 9; ++v)
			{
				mrc[I][J][v] = false;
			}
}

void printHTML(char* fi){
	FILE* f1 = fopen(fi,"w");
	fprintf(f1,"<table border = 1>\n");
	for(int i = 0; i< 9;i++){
		fprintf(f1,"<tr>\n");
		for(int j = 0; j < 9; j++){
				fprintf(f1,"<td width = 40px height = 40px align='center' bgcolor='pink' ><p>");
				fprintf(f1, "%d",x[i][j]);
				fprintf(f1, "</p></td>");
		}
		fprintf(f1,"</tr>\n");
	}
	fprintf(f1,"</table>");
	fclose(f1);
}

void solution(){
	count++;
	printf("%d -------------------------\n", count);
	for(int i = 0 ; i < 9 ; i++){
		for(int j = 0 ; j < 9; j++)
			printf("%d ", x[i][j]);
		printf("\n");
	}
	if (count ==2 )
		exit(0);
	printHTML("SudokuShow.html");
}

bool check(int v, int r, int c){
	if(mr[r][v]) return false;
	if(mc[c][v]) return false;
	if(mrc[r/3][c/3][v]) return false;
	return true;
}

void TRY(int r, int c){
	for(int v = 1; v <= 9 ; v++){
		if (check (v, r, c)){
			x[r][c] = v;

			mr[r][v] = true; // danh dau true xac dinh da xuat hien
			mc[c][v] = true;
			mrc[r/3][c/3][v] = true;

			if ( r == 8 && c == 8){
				solution();
			} else {
				if (c == 8) TRY(r+1 ,0);
				else TRY(r,c+1);
			}

			mr[r][v] = false; // khoi phuc da xuat hien
			mc[c][v] = false;
			mrc[r/3][c/3][v] = false;

		}

	}
}

int main()
{
	init();
	TRY(0,0);

	return 0;
}