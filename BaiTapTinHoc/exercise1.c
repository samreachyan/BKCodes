#include <stdio.h>

main(int argc, char const *argv[])
{
	int quality, price, discount;
	float total, total_after_discount, discount_total;

	printf("\n---- Invoice KTX T4 shop ----");

	printf("\nInput quality : ");
	scanf ("%d" , &quality);

	printf("Input price R : ");
	scanf ("%d", &price);

	printf("Input discount : " );
	scanf ("%d", &discount);

	total = quality * price;
	discount_total = (total * discount ) / 100 ;
	total_after_discount = total - discount_total ;

	printf("\n\n-------------------------------------------");
	printf("\nTotal the price is %0.0f Riels", total);
	printf("\nYou got discount is %0.0f Riels", discount_total);
	printf("\nTotal after discount is %0.0f Riels", total_after_discount);
	printf("\n----------- Thanks you!!");
	return 0;
}