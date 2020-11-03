#include <bits/stdc++.h>
using namespace std;

int n, m, k, d[35], s, res, first;

vector<int> g[35];

void DFS (int u) {
    for(auto v:g[u]){
        if(v == first && s == k-1){
            ++res;
            return;
        }
        if(!d[v]){
            d[v] = 1;
            ++s;
            DFS(v);
            --s;
            d[v] = 0;
        }
    }
}

int main() {
    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for (int i = 1; i <= n; ++i) {
        first = i;
        d[i] = 1;
        DFS(i);
        d[i] = 0;
    }
    cout << res/k/2;
}