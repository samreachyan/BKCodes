#include <stdio.h>
// Bai 5
double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    for (int i = 0; i < size; i++) {
        printf("%d ", *(a+i));
        if (max < (a+i)) max = (a+i);
    }
    
    printf("\n haha = %d\n", max);
    return max;
}

int main() {
    int *arr;
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", arr+i);
    }

    printf("\nMax = %d", maximum(arr, size));  
    return 0;
}