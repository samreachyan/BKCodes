#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second

int n, m, s, t;
long long d[100005];
vector<pair<int, int > > g[100005];

void dijkstra(int s) {
    memset(d,62,sizeof d);
    d[s] = 0;
    priority_queue<pair<long long, int> >q;
    q.push(make_pair(d[s],s));
    while(!q.empty())
    {
        int w = -q.top().F;
        int u = q.top().S;
        q.pop();
        if (w != d[u]) continue;
        for (auto t:g[u]) {
            int v = t.F;
            int l = t.S;
            if (d[v] > l+w) {
                d[v] = l+w;
                q.push(make_pair(-d[v],v));
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= m; ++i) {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back(make_pair(v,w));
    }
    cin >> s >> t;
    dijkstra(s);
    d[t] = d[t] > 1e18 ? -1 : d[t];
    cout << d[t];
    return 0;
}
