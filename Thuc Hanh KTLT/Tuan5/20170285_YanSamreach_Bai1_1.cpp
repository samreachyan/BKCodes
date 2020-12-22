#include <stdio.h>

int x[100], mark[100], n;

void print(){ // Wrong
    for (int i = 1; i <= n; ++i) printf("%d ", x[i]);
    print("\n");
}

void process(int i) {
    if (i > n){
        printf(); // Error  
        return;
    }
    for (int j = 1; j <= n; ++j)
        if (!mark[j]){
            mark[j] = 1;
            x[i] = j;
            process(i+1);
            mark[j] = 0;
        }
}

int main() {
    n = 5;
    process(1);
    return 0;
}