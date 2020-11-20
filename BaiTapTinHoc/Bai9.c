#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int count=0, n, sothuc, sum=0; 
	printf("De nhap vao n lan : ");
	scanf("%d", &n);
	printf("\n");

	for (int i=0 ; i<n ; ++i){

		printf("Nhap vao so thus : ");
		scanf("%d",&sothuc);

		if (sothuc>0){
			++count;
			sum +=sothuc;
		}
	}

	printf("\nBan da nhap vao %d lan so duong va tong so duong la %d.", count, sum );
	return 0;
}