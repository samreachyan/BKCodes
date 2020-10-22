#include <iostream>
using namespace std;
// Bai 5
// double* maximum(double* a, int size){
//     double *max;
//     max = a;
//     if (a==NULL) return NULL;
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(a+i));
//         if (max < (a+i)) max = (a+i);
//     }
    
//     return max;
// }

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

    // double myarr[5];
    // int i = 0;
    // int arrSize = 5;

    // cout << "Input 5 floating point values for your array" << endl;
    // for(i = 0; i < arrSize; i++){ // loop to input values
    //     cin >> myarr[i];
    // }
    // double* maxNum = maximum( myarr, arrSize);     
    // cout << *maxNum << endl;
    // return 0;
}