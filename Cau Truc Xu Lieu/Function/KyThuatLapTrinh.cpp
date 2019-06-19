#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
using namespace std;

FILE *f;
char fileName[]="ds_204.dat";
int ts=50, n=0;

struct Std{
	char *name, *Class, *ID;
	float *score;
} *S, tg;

struct Std2{
	char name[40], Class[20], ID[15];
	float score;
} S2;

Std2 input(Std2 sv){	
	printf("MSSV: ");
	fflush(stdin);
	gets(sv.ID);
	printf("Lop: ");
	fflush(stdin);
	gets(sv.Class);
	printf("Diem: ");
	scanf("%f",&sv.score);
	return sv;
}
void add(){	
	while(1){
		printf("\nVao sinh vien thu %d",n+1);
		printf("\nTen: ");
		fflush(stdin);
		gets(S2.name);
		if (S2.name[0]=='\0') break;
		S2=input(S2);		
		S[n].name=new char[strlen(S2.name)+1];
		strcpy(S[n].name,S2.name);
		S[n].ID = new char[strlen(S2.name)+1];
		strcpy(S[n].ID,S2.ID);
		S[n].Class= new char[strlen(S2.Class)+1];                  // S[n] <-- S2
		strcpy(S[n].Class,S2.Class);
		S[n].score = new float[1];
		*S[n].score=S2.score;
		n++;
		//het thi cap phat tiep
		if (n==ts){
			ts+=50;
			Std *T= new Std [ts];
			for (int i=1; i<=n; i++)	T[i]=S[i];        //realloc
			delete []S;
			S=T;
		}
	}	
}

int namepos(char *s){
	int i=strlen(s);
	while ( s[i] == ' ' && i > -1 ) i--;
	while ( s[i] != ' ' && i > -1 ) i--;
	return i+1;
}

void VNSort(){
	int i,j,k;
	for(i=0;i<n-1;i++) {
		k=i;
		for(j=i+1;j<n;j++)
		if(strcmp(S[k].name+namepos(S[k].name),S[j].name+namepos(S[j].name))>0) k=j;
		if(k>i)
		{
			tg=S[i];
			S[i]=S[k];
			S[k]=tg;
		}
	}
	printf("\nDa sap xep xong");
	getch();
}

void print_screen(){
cout<<"\n\n\n   "<<setw(20)<<"Ho ten"<<setw(20)<<"Ma so SV"<<setw(10)<<"Lop"<<setw(8)<<"Diem";
	for (int i=0; i<n; i++)
		{
			cout<<"\nSV"<<i+1<": ";
			cout<<setw(20)<<S[i].name<<setw(20)<<S[i].ID<<setw(10)<<S[i].Class<<setw(8)<<*S[i].score;
			if (i==n-1) getch();
		}
}

int main(){
	f=fopen(fileName,"rb");
	if(f!=NULL){
		fseek(f,0,2);
		n=ftell(f)/sizeof(Std2);
		fseek(f,0,0);
		S=new Std[ts];
		for (int i=0; i<n; i++){
			fread(&S2,sizeof(Std2),1,f);
			S[i].name=new char[strlen(S2.name)+1];
			strcpy(S[i].name,S2.name);
			S[i].ID=new char[strlen(S2.ID)+1];
			strcpy(S[i].ID,S2.ID);
			S[i].Class=new char[strlen(S2.Class)+1];
			strcpy(S[i].Class,S2.Class);
			S[i].score=new float[1];
			*S[i].score=S2.score;
		}
	}
	else S=new Std[ts];
	char ch;
	while(1){
		system("cls");
		printf("\n\n\n");
		printf("              QUAN LI SINH VIEN\n");
		printf("\n             1. Bo sung danh sach");
		printf("\n             2. Sap xep kieu VN");
		printf("\n             3. In ds");		
		printf("\n            Bam 1-3 de chon, phim khac de ket thuc");
		
		ch=getch();
		if (ch=='1') add();
		else if (ch=='2') VNSort();
		else if (ch=='3') print_screen();			 	
		else {
			printf("\n                   Thuc su muon ket thuc?   Y/...");
		  	ch= getch();
		  	if (ch=='y'||ch=='Y') break;
		}
	}

	f=fopen(fileName,"wb");
	for (int i = 0 ; i < n ; i++ ){
		strcpy(S2.name,S[i].name);
		strcpy(S2.ID,S[i].ID);
		strcpy(S2.Class,S[i].Class);
		S2.score=*S[i].score;
		fwrite(&S2,sizeof(Std2),1,f); 
	}
	fclose(f);
	delete []S;
	return 0;
}