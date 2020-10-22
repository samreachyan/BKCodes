/* 
    auth: Samreach
    date: 21-Oct-2020
*/

#include <stdio.h>
#include <stdlib.h>

int *a;
int n, tmp;

int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //#Allocate memory
    a = (int*)malloc(n*sizeof(int));    
    
    for(int i = 0; i < n; i++)
        scanf("%d", a + i); 
    
    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    //#Sort array
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) {
            if (*(a + j) < *(a + i)) { 
                int t = *(a + i); 
                *(a + i) = *(a + j); 
                *(a + j) = t; 
            } 
        } 
    } 
    
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    free(a);
    return 0;
}