#include <bits/stdc++.h>
using namespace std;

int n, m, a[1005], c[1005][1005], res;

int main() {
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> c[i][j];
    cin >> m;
    for(int i = 1; i <= m; ++i)
        cin >> a[i];
    for(int i = 1; i < m ; ++i)
        res += c[a[i]][a[i+1]];
    cout << res;
    return 0;
}