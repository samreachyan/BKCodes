#include <bits/stdc++.h>
using namespace std;

int n, m, dd[100005];
vector<int> g[100005];

void DFS(int u) {
    for (int i = 0; i < g[u].size(); ++i) {
        int v = g[u][i];
        if (dd[v] == dd[u]){
            cout << 0;
            exit(0);
        }
        if (!dd[v]) {
            dd[v] = 3-dd[u];
            DFS(v);
        }
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
        if (!dd[i]) {
            dd[i] = 1;
            DFS(i);
        }
	}
	cout << 1;
    return 0;
}