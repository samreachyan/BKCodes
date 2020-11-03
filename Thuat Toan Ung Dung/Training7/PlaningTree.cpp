#include <bits/stdc++.h>
using namespace std;

int n, a[100005], res;

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    sort(a+1,a+n+1,greater<int>());
    for (int i = 1; i <= n ; ++i) {
        res = max(res,i+a[i]+1);
    }
    cout << res;

    return 0;
}