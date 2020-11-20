#include<iostream>
using namespace std;
#include<conio.h>
#include<antheader.h>
#include<fstream>

//Text File: w=write, r=read, a=appent text
//Binary file: wb=write, rb=read, ab=appent text
class RegisterForm{
	public:
		char id[5], name[20], gender[7];
		float pay;
};
RegisterForm r;
FILE *ft;
void manu();
void fileinsert();
void fileview();
void filesearch();
void update();
void deleted();

int main()
{	
	manu();
	getch();
}
void manu()
{
	cls();
	cout<<"\t\t\t1. Enter to insert \n\n";	
	cout<<"\t\t\t2. Enter to view \n\n";
	cout<<"\t\t\t3. Enter to search \n\n";
	cout<<"\t\t\t4. Enter to update \n\n";
	cout<<"\t\t\t5. Enter to delete \n\n";
	cout<<"\t\t\t6. Enter to sort \n\n";
	int n;
	cout<<"enter to chose the option ";cin>>n;
	switch(n)
	{
		case 1:
			fileinsert();
		break;
		case 2:
			fileview();
		break;
		case 3:
			filesearch();
		break;
	}
}
void fileinsert()
{
	do
	{
		ft=fopen("Mytextfile.txt", "ab");//create and open	
		cout<<"Enter id ";cin>>r.id;
		cout<<"Enter name ";cin>>r.name;
		cout<<"Enter gender ";cin>>r.gender;
		cout<<"Enter pay ";cin>>r.pay;
		fwrite(&r, sizeof(r), 1, ft);
		fclose(ft);
		cout<<"press enter to con...\n";
	}while(getch() !=27);
	manu();
}
void fileview()
{
	cls();
	ft=fopen("Mytextfile.txt", "rb");//read
	cout<<"ID\t\tName\t\tGender\t\tPay\n\n";
	while( fread(&r, sizeof(r), 1, ft) )
	{
		cout<<r.id<<"\t\t"<<r.name<<"\t\t"<<r.gender<<"\t\t"<<r.pay<<"\n\n";
	}
	fclose(ft);
	system("pause");
	manu();
}
void filesearch()
{
	cls();
	char ids[10];
	ft=fopen("Mytextfile.txt", "rb");//read
	cout<<"Enter id to search ";
	cin>>ids;
	cout<<"ID\t\tName\t\tGender\t\tPay\n\n";
	while( fread(&r, sizeof(r), 1, ft) )
	{
		if(strcmp(r.id,ids)==0)
		{
			cout<<r.id<<"\t\t"<<r.name<<"\t\t"<<r.gender<<"\t\t"<<r.pay<<"\n\n";
		}		
	}
	fclose(ft);
	system("pause");
	manu();
}

void update(){
	cls();
	char up[10];
	ft=fopen("Mytextfile.txt","rb+");
	cout<<" Enter ID to update => ";
	cin>> up;
	while( fread(&r , sizeof(r),1,ft)){
		if(strcmp(r.id, up)==0){
			fseek(ft, 9, SEEK_CUR);
			cout<<"Update ID : "; cin>>r.id;
			cout<<"Update name : "; cin>>r.name;
			cout<<"Update Gender : "; cin>>r.gender;
			cout<<"Update Pay : "; cin>>r.pay;
			fwrite(&r, sizeof(r), 1, ft);
			break;
		}
	}
	fclose(ft);
	cout<<"Back....";
	getch();
	manu();
}
