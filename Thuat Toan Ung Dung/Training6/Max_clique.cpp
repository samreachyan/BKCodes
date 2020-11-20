#include <bits/stdc++.h>
using namespace std;

int res, n, m, b[15], s;
vector<int> g[15];

void Try(int x) {
    if(x > n){
        return;
    }
    int dem = 0;
    for (auto v:g[x]) {
        if(b[v]) ++dem;
    }
    if (dem == s) {
        ++s;
        b[x] = 1;
        res = max(res,s);
        Try(x+1);
        b[x] = 0;
        --s;
    }
    Try(x+1);
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    Try(1);
    cout << res;
    return 0;
}