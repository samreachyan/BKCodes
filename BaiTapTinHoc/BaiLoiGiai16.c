/*
	Author 		: YAN Samreach
	Date		: 21/12/2018
	Describe 	: patient management
*/

#include <stdio.h>
#include <stdlib.h>

struct patient {
		char name[30];
		int month, year, gender;
		float kg;
	}te ;

int main(int argc, char const *argv[])
{

	FILE *f;
	float trl;
	int month, year, dem=0 , stt = 1, bt = 0, bg=0;

	if ( (f = fopen("sosinh.txt", "wb") ) == NULL ){
		puts("\nKhong tao duoc tep.");
		exit(0);
	}
	else {
		do{
			printf("\nEnter weight : ");
			scanf("%f", &trl);
			if (trl > 0 ){
				printf("Enter name : ");	fflush(stdin);	scanf("%s", te.name);
				printf("Enter month of birth : ");	scanf("%d", &te.month);
				printf("Enter year of birth : ");	scanf("%d",&te.year);
				printf("Enter gender (1 male , 0 female) : ");	scanf("%d", &te.gender);

				te.kg = trl;
				fwrite(&te, sizeof(te), 1, f);
			}
		} while ( trl > 0);
		fclose(f);
	}

	printf("\nEnter month and year : ");
	scanf("%d%d", &month, &year);
	f = fopen("sosinh.txt" , "rb");
	printf("\nList of patient month : %d year : %d \n", month, year);

	while(fread(&te, sizeof(te), 1, f) ) {
	    if (te.month == month && te.year == year ){
	    	if(te.gender == 1)
	    		printf("%-3d %-22s %-5.2fkg male\n" , stt++ , te.name, te.kg);
	    	else 
	    		printf("%-3d %-22s %-5.2fkg female\n" , stt++ , te.name, te.kg);
	    	dem++;
	    }
	}

	if (!dem)
		printf("\nNo any patient has birthday in month: %d and year: %d \n", month, year);
	fclose(f);

	f = fopen("sosinh.txt" , "rb");
	while(fread(&te, sizeof(te), 1, f) ) {
	    if (te.year == 2012 && te.gender == 1) bt++;
	    if (te.year == 2012 && te.gender == 0) bg++;
	}
	fclose(f);

	f = fopen("ketqua.txt", "wt");
	if (bg>0){
		fprintf(f, "Ty le sinh be trai/gai nam 2012 : %6.2f", ((float)bt)/bg );
	} else {
		fprintf(f , "Ty le sinh be trai/gai nam 2012 : %6d", -1 );
	}
	fclose(f);

	return 0;
}