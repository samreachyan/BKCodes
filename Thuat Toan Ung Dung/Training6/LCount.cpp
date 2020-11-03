#include <bits/stdc++.h>
using namespace std;

int n, d[100005], res;
vector <int> g[100005];

void DFS(int u) {
    int leaf = 1;
    for (auto v:g[u]) {
        if (!d[v]) {
            leaf = 0;
            d[v] = 1;
            DFS(v);
        }
    }
    res += leaf;
}

int main() {
	cin >> n;
	for (int i = 1;i < n; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
	}
	d[1] = 1;
	DFS(1);
	cout << res;
    return 0;
}