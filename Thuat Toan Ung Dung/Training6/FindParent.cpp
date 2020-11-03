#include <bits/stdc++.h>
using namespace std;

int n, p[100005];
vector <int> g[100005];

void DFS(int u) {
    for(auto v:g[u]) {
        if( v!= p[u]) {
            p[v] = u;
            DFS(v);
        }
    }
}

int main() {
    cin >> n;

    for(int i = 1; i < n; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    DFS(1);
    for(int i = 2; i <= n; ++i)
        cout << p[i] << ' ';

    return 0;
}