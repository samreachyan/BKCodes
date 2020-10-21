/* 
    auth: Samreach
    date: 21-Oct-2020
*/
#include <stdio.h>
int main(){
    int a[7]= {13, -355, 235, 47, 67, 943, 1222}; 
    
    printf("address of first five elements in memory.\n");
    for (int i=0; i<7; i++)  printf("a[%d] \t\t",i);
    printf("\n");
    
    /*****************
    # YOUR CODE HERE #
    *****************/
    for (int i = 0; i < 7; i++)
        printf("%d\t", &a[i]);
    return 0;
}