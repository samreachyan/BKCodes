#include <bits/stdc++.h>
using namespace std;

int n, k, m, d[10005], f[10005][2005], res = 2e9;

vector<pair <int,int> > g[10005];

void DP(int u) {
    for(auto t:g[u]) {
        int v = t.F;
        int w = t.S;
        if(!d[v]) {
            d[v] = 1;
            DP(v);
            for (int i = 1; i <= k; ++i) {
                if ((f[v][i-1]!= 0 || i == 1) && f[u][k-i] != 0) {
                    res = min(res,f[u][k-i] + f[v][i-1] + w);
                }
            }
            for (int i = 1; i <= k; ++i) {
                if(f[v][i-1]!= 0 || i == 1) {
                    if (f[u][i] == 0) f[u][i] = f[v][i-1]+w;
                    else f[u][i] = min(f[u][i],f[v][i-1]+w);
                }
            }
        }
    }
    if (f[u][m] != 0)
        res = min(res,f[u][k]);
}

int main() {
    cin >> n >> k >> m;
    for(int i = 1; i <= m; ++i) {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].pb(mp(v,w));
        g[v].pb(mp(u,w));
    }
    
    d[1] = 1;
    DP(1);
    cout << res;
    return 0;
}