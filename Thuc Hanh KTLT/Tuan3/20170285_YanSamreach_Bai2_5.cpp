#include <iostream>
using namespace std;

int binom(int n, int k) {
    if (k > n) return 0;
    if (k == 0) return 1;
    return binom(n-1, k) + binom(n-1, k-1);
}

int binom2(int n, int k){
    // n is line number display
    // k is index working on
    // n=1, k0,1 | n=2, k=0,1,2 | n=3, k=0,1,2,3
    int tmp = 0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<k; ++j) {

        }
    }

}

int main() {
    int m;
    cin >> m;
    // for (int n = 1; n <= m; ++n){
    //     for (int k = 0; k <= n; ++k)
    //         printf("%d ", binom(n, k));
    //     printf("\n");
    // }
    for (int n = 1; n <= m; ++n){
        for (int k = 0; k <= n; ++k)
            // printf("%d ", binom2(n, k));
            binom2(n, k);
        printf("\n");
    }
    return 0;
}