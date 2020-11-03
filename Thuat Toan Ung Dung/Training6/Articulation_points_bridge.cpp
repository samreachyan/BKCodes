#include <bits/stdc++.h>
using namespace std;

vector<int> g[100005];
int bridge, n, m, num[100005], low[100005], dem;
set <int > point;

void tarjan(int u,int p) {
    int numchild = 0;
    num[u] = low[u] = ++dem;
    for(auto v:g[u]) {
        if (v == p) continue;
        if (!num[v]) {
            ++numchild;
            tarjan(v,u);
            low[u] = min(low[u],low[v]);
            if (u == p) {
                if(numchild >=2) point.insert(u);
            } else {
                if(low[v] >= num[u]) point.insert(u);
            }

            if (low[v] >= num[v]) ++bridge;

        } else {
            low[u] = min(low[u],num[v]);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    for(int i = 1; i <= n; ++i) {
        if(!num[i]) {
            tarjan(i,i);
        }
    }

    cout << point.size() << " " << bridge;
    return 0;
}