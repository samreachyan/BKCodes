/* 
    auth: Samreach
    date: 21-Oct-2020
*/
#include <stdio.h>

int main() {
    int x, y, z;
    int * ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;
    printf("x = %d\n", *ptr);

    ptr = &y;
    printf("y = %d\n", *ptr);

    ptr = &z;
    printf("z = %d\n", *ptr);
    return 0;
}