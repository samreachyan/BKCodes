#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int n, count=0, count_number=0; 
	do{
		printf("Nhap vao so n : ");
		scanf("%d", &n);

		++count;  // It's not logical now. Change algorithsm.
		if (n%3 == 0){
			++count_number;
		}
		// in this case if user input value and then input character, so the program will run all loop. 
		// if the user input character first, the program will break. It's not logical.
		else if (n >=65 && n <=90 ){
			break;
		}
		else if ( n >= 97 && n <=122 ){
			break;
		}

	}while ( (n>=2 && n<=52) && count < 52 );
	printf("\n\n-------------------------------------\nCam on ban!\nBan da nhap vao %d lan va so chia het cho 3 co %d so. ",count , count_number );
	return 0;
}