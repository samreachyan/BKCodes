#include <stdio.h>
#include <math.h>
#include <unistd.h>
// #include <termios.h>

long binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}

int main()
{ 
    system("clear");
    long binarynum;
    int test = 1;
    printf("Enter a binary number: ");
    scanf("%ld", &binarynum);
    
    printf("Equivalent decimal number is: %ld", binaryToDecimal(binarynum));
    
    return 0;
}