#include <bits/stdc++.h>
using namespace std;

int n, k;
long long a[5005],c[5005];
long long f[105][5005];

int main() {
    cin >> n >> k;
    ++k;

    for (int i = 1; i <= n; ++i) {
        cin >> c[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    f[1][1] = c[1];
    for (int i = 2; i <= k; ++i) {
        for (int j = 2; j <= n; ++j) {
            for (int v = j-1; v >= max(j-55,1); --v) {
                if (a[v]+v >= j && f[i-1][v]) {
                    f[i][j] = max(f[i][j],f[i-1][v]+c[j]);
                }
            }
        }
    }
    
    f[k][n] = f[k][n] ? f[k][n] : -1;
    cout << f[k][n];
    return 0;
}