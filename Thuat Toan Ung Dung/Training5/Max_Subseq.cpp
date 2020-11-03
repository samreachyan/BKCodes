#include <bits/stdc++.h>
using namespace std;

int f[1000005],n,res = -1e9;

int main() {
    cin >> n;
    for (int i = 1,x;i <= n; ++i) {
        cin >> x;
        f[i] = f[i-1] < 0 ? x : f[i-1]+x;
        res = max(res,f[i]);
    }
    cout << res;
    return 0;
}