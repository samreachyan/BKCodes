#include <bits/stdc++.h>
using namespace std;

int n, m, ok, d[2005];
vector <int> g[2005];

void DFS(int u) {
    for (auto v:g[u]) {
        if (!d[v]) {
            d[v] = 3-d[u];
            DFS(v);
        }
        if (d[v] == d[u]) ok = 0;
    }
}

int main() {
    int t,cnt=0;
	cin >> t;
	while (t--) {
        cin >> n >> m;
        ok = 1;
        memset(d,0,sizeof d);
        for (int i = 1; i <= n; ++i)
            g[i].clear();
        for (int i = 1; i <= m; ++i){
            int u,v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (int i = 1; i <= n; ++i){
            if (!d[i]) {
                d[i] = 1;
                DFS(i);
            }
        }
        cout << "Scenario #" << ++cnt <<":" << '\n';
        if (ok) {
             cout << "No suspicious bugs found!" << '\n';
        } else {
            cout << "Suspicious bugs found!" << '\n';
        }
	}

    return 0;
}