/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: student management
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
	char maso[9];
	char hoten[31];
	float diemtoan;
}HOCSINH;

HOCSINH ds[30] , tg;

int main(int argc, char const *argv[])
{
	int i , j , n=0 ; 
	float diemtoan;
	char maso[9];
	char hoten[31];

	for (int i = 0; i < 30; ++i)
	{
		printf("\nNhap vao ma so SV thu %d : ",i+1);
		//fflush(stdin);
		//gets(maso);
		scanf("%s", maso);
		if (strcmp(maso, "$$$") == 0) break; 
		n++;
		strcpy(ds[i].maso, maso);

		printf("Nhap vao ho ten : ");
		//fflush(stdin);
		//gets(hoten);
		scanf("%s", hoten);
		strcpy(ds[i].hoten , hoten);

		printf("Nhap vao diem toan : ");
		scanf("%f", &diemtoan);

		ds[i].diemtoan = diemtoan ;
	}

	// sort score
	for (int i = 0; i < n-1; ++i)
		for (int j = i+1; j < n; ++j)
			if (ds[i].diemtoan < ds[j].diemtoan){
				tg = ds[i];
				ds[i] = ds[j];
				ds[j] = tg;
			}

	// print name 
	printf("\nDanh sach hoc sinh sau khi sap xep theo diem toan");
	printf("\n+--------+-----------------------------------+-----------+");
	printf("\n|  Ma So |                HO TEN             | DIME TOAN |");
	printf("\n+--------+-----------------------------------+-----------+");

	for (int i = 0; i < n; ++i)
		printf("\n|%8s|%35s|%11.2f|" , ds[i].maso, ds[i].hoten, ds[i].diemtoan);

	printf("\n+--------+-----------------------------------+-----------+");

	return 0;
}