#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

double cube(double x) {
    return x * x * x;
}

int main() {
    int n;
    double f;
    scanf("%d %lf", &n, &f);
    
    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(f));
    
    return 0;
}