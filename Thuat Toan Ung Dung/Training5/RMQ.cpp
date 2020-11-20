#include <bits/stdc++.h>
using namespace std;

int n, a[1000005], st[4000005], m;
long long res;

void build(int id,int l,int r) {
    if( r == l) {
        st[id] = a[l];
        return;
    }
    int mid = (l+r) >> 1;
    build(id << 1,l,mid);
    build((id<<1)+1,mid+1,r);
    st[id] = min(st[id << 1],st[(id << 1)+1]);
}

long long get(int id,int l,int r, int a, int b){
    if(r < a) return 1e9;
    if(l > b) return 1e9;
    if(l >= a && r <= b) return st[id];
    int mid = (l+r) >> 1;
    return min(get(id << 1,l,mid,a,b),get((id << 1)+1,mid+1,r,a,b));
}


int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    build(1,1,n);

    cin >> m;
    for (int i = 1; i <= m; ++i) {
        int x,y;
        cin >> x >> y;
        res += get(1,1,n,x+1,y+1);
    }

    cout << res;
    return 0;
}