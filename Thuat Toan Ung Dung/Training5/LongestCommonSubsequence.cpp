#include <bits/stdc++.h>
using namespace std;

int n, m, a[10005], b[10005], f[10005][10005];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i) {
        cin >> b[i];
    }
    for (int i = 1; i <= n; ++i) 
        for (int j = 1; j <= m; ++j) {
            if (a[i] == b[j]) {
                f[i][j] = f[i-1][j-1] + 1;
            } else {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
        }
    
    cout << f[n][m];
    return 0;
}