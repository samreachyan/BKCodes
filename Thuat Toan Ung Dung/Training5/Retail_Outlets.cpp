#include <bits/stdc++.h>
using namespace std;
#define M 1000000007

int n,m;
int a[105];
int f[105][505];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    f[0][0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            for (int k = a[i]; k <= j; k+= a[i]) {
                f[i][j] = (f[i][j] + f[i-1][j-k]) % M;
            }
        }
    }
    cout << f[n][m];

    return 0;
}