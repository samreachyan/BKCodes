/* 
    auth: Samreach
    date: 21-Oct-2020
*/
#include <stdio.h>
// Bai 4
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

int main() {
    int *arr;
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", arr+i);
    }
    printf("\nCountEven = %d", counteven(arr, size));    
    return 0;
}