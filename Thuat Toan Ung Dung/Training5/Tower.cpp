#include <bits/stdc++.h>
using namespace std;

struct block {
    int x,y,z;
    block(){};
    block(int _x, int _y, int _z) {
        x = _x;
        y = _y;
        z = _z;
    }
}a[185];

int n, f[185];

bool cmp(block a, block b){
    return a.x > b.x;
}

int solve() {
    int res = 0;
    memset(f,0,sizeof f);
    n *= 6;
    a[0] = block(2e9,2e9,2e9);
    sort(a+1,a+n+1,cmp);
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(a[i].x < a[j].x && a[i].y < a[j].y) {
                f[i] = max(f[i],f[j]+a[i].z);
            }
        }
        res = max(res,f[i]);
    }
    return res;
}

int main() {
    int dem = 0;
    while(1) {
        cin >> n;
        if(n == 0) break;
        for (int i = 1; i <= n; ++i) {
            int x,y,z;
            cin >> x >> y >> z;
            a[i*6-5] = block(x,y,z);
            a[i*6-4] = block(y,x,z);
            a[i*6-3] = block(x,z,y);
            a[i*6-2] = block(z,x,y);
            a[i*6-1] = block(y,z,x);
            a[i*6] = block(z,y,x);
        }
        cout << "Case " << ++dem << ": maximum height = " << solve() << "\n";
    }
    return 0;
}