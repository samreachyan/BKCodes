#include <bits/stdc++.h>
using namespace std;

int n,m,num[100005],low[100005], dem,cnt,d[100005],dd[100005],fre[100005];
long long res;

vector<int> g[100005],g2[100005];

stack<int >s;

int DFS(int u){
    int t = 1;
    for(auto v:g2[u]){
        if(!dd[v]){
            dd[v] = 1;
            t += DFS(v);
        }
    }
    return t;
}

void tarjan(int u,int p){
    num[u] = low[u] = ++cnt;
    s.push(u);
    for(int v:g[u]){
        if(v == p || fre[v]) continue;
        if(num[v]){
            low[u] = min(low[u],num[v]);
        }else{
            tarjan(v,u);
            low[u] = min(low[u],low[v]);
        }
    }
    if(num[u] == low[u]){
        ++dem;
        while(s.top() != u){
            int v = s.top();
            fre[v] = dem;
            s.pop();
            d[dem] = 1;
        }
        fre[u] = dem;
        s.pop();
    }
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= m; ++i) {
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i) {
        if (!num[i]) {
            tarjan(i,i);
        }
	}

    for (int u = 1; u <= n ; ++u) {
        if (d[fre[u]]) continue;
        for (auto v:g[u]) {
            if (fre[v] != fre[u]) {
                g2[u].push_back(v);
                g2[v].push_back(u);
            }
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (!dd[i]) {
            dd[i] = 1;
            int t = DFS(i);
            if (t > 1) {
                res += 1ll*(t-2)*(t-1)/2;
            }
        }
    }
    cout << res;
    return 0;
}