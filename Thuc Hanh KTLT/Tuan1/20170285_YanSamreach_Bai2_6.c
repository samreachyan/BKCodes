#include <stdio.h>

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
 
    reversearray(arr, size);
    // ptr_reversearray(arr, size);
    return 0;
}