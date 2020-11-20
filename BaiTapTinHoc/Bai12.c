/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: Change character by ASCII 
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
	top:
	
	char kytu;
	int value_kytu;

	printf("\nNhap voa chu nao do : ");
	scanf("%c", &kytu);
	value_kytu = (int)kytu;

	if (value_kytu >=65 && value_kytu <=90 ){
		value_kytu += 32;
	} else if ( value_kytu >= 97 && value_kytu <=122 ){
		value_kytu -= 32;
	} else {
		printf("Ky tu ban da nhap vao khong thay doi.\n");
	}

	printf("\nChuong trinh da thay doi ky tu la %c.", value_kytu );
	goto top;
	return 0;
}