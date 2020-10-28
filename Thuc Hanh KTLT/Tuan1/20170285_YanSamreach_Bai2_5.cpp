#include <iostream>
using namespace std;
// Bai 5
double * maximum(double* a, int size)
{
    double *max;
    max = a;
    if (a==NULL) return NULL;
    max = &a[0];
    for (int i=1; i<size; ++i) 
        if (a[i] > *max) {
            max = &a[i];
        }
    return max;
}

int main() {
    double a[]={1.2,2.5,9.55};
	double * max = maximum(a, 3);
	printf("%lf \n", *max);
	return 0;
}