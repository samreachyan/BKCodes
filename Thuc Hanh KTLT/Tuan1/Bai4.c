/* 
    auth: Samreach
    date: 21-Oct-2020
*/
#include <stdio.h>
int counteven(int *arr, int size) {
    int count = 0;
    for (int i=0; i<size; i++) {
        if ((*(arr+i)%2) == 0) {
            // printf("%d ", *(arr+i));
            count++;
        }
    }
    return count;
}

// Bai 5
double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    for (int i = 1; i < size; i++) {
        printf("%d ", (a+i));
        if (max < (a+i)) max = (a+i);
    }
    
    printf("\n haha = %d\n", &max);
    return max;
}

//Bai 6
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    for (int i=0; i<=(l+r)/2; ++i) {
        tmp = arr[l+i];
        arr[l+i] = arr[r-i];
        arr[r-i] = tmp;
    }
    // print
    printf("\nRevertArray: \n");
    for (int i=0; i<=r; ++i) {
        printf("%d ", arr[i]);
    }
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    for (int i=l; i<=(l+r)/2; ++i) {
        tmp = *(arr+(l+i));
        *(arr+l+i) = *(arr+r-i);
        *(arr+r-i) = tmp;
    }
    printf("\nRevertArray pointer: \n");
    for (int i=0; i<=r; ++i) {
        printf("%d ", *(arr+i));
    }
}

int main() {
    int *arr;
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", arr+i);
    }
    ptr_reversearray(arr, size);

    printf("\nMax = %d", maximum(arr, size));
    printf("\nCountEven = %d", counteven(arr, size));    
    return 0;
}