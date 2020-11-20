#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];
int n, m, dd[100005], res;

void DFS(int u){
    dd[u] = 1;
    for(int i = 0; i < g[u].size(); ++i){
        int v = g[u][i];
        if(!dd[v]) DFS(v);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for (int i = 1; i <= n; ++i) {
        if(!dd[i]) {
            ++res;
            DFS(i);
        }
    }
    cout << res;

    return 0;
}