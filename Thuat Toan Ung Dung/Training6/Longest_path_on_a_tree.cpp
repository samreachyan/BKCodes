#include <bits/stdc++.h>
using namespace std;

//Gioi han de sai
int n,res,d[100005];
vector<pair <int, int > > g[100005];

int DFS(int u) {
    int max1 = 0,max2 = 0;
    for(auto x: g[u]) {
        int v = x.F;
        int w = x.S;
        if(d[v]) continue;
        d[v] = 1;
        int temp = w + DFS(v);
        if(temp > max1) {
            max2 = max1;
            max1 = temp;

        } else if(temp > max2) {
            max2 = temp;
        }
    }
    res = max(res, max1+max2);
    return max1;
}

int main() {
    cin >> n;
    for(int i = 1; i < n; ++i) {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].pb(mp(v,w));
        g[v].pb(mp(u,w));
    }
    d[1] = 1;
    DFS(1);
    cout << res;
    return 0;
}
