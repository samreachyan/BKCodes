#include <iostream>
using namespace std;
// Bai 5
double * maximum(double* a, int size)
{
    double *max;
    max = a;
    if (a==NULL) return NULL;

    double maxVal = *max;
    for (int i=1; i<size; ++i) 
        if (a[i] > maxVal) {
            max = &a[i];
            maxVal = *max;
        }
    return max;
}

int main() {
    double *arr;
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%dl", arr+i);
    }

    double * max = maximum(arr, size);
    printf("\nMax = %dl\n", max);
}