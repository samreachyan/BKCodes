/* 
    auth: Yann Samreach
    date: 3-Nov-2020
*/
#include <stdio.h>
#include <math.h>

float get_hypotenuse(float x, float y) {
    return sqrt(pow(x,2) + pow(y,2));
}

int main(){
    float x, y;
    scanf("%f%f", &x, &y);
    
    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z);
    
    return 0;
}