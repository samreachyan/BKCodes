#include <bits/stdc++.h>
using namespace std;

int n, tt, d;
int a[1005], t[1005];
int f[105][1005];
int res;

int main() {
    cin >> n >> tt >> d;
    for (int i = 1; i <=n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> t[i];
    }

    for (int i = 1; i <= tt; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= d; ++k) {
                if (i - t[j] >= 0 && j-k >= 0) {
                    f[i][j] = max(f[i-t[j]][j-k]+a[j],f[i][j]);
                    res = max(res,f[i][j]);
                }
            }
        }
    }
    cout << res;
    return 0;
}