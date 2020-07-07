#include <bits/stdc++.h>
using namespace std;

int INF = 100000;
int d[10];
int mem[10][10000];
memset(mem, -1, sizeof(mem));

int opt(int i, int x) {
    if (x < 0) return INF;
    if (x == 0) return 0;
    if (i == -1) return INF;

    if (mem[i][x] != -1) return mem[i][x];

    int res = INF;
    res = min(res, 1 + opt(i, x - d[i]));
    res = min(res, opt(i -1, x));

    mem[i][x] = res;
    return res;
}

void trace(int i, int x) {
    if (x < 0) return;
    if (x == 0) return;
    if (i == -1) return;

    int res = INF;
    if (mem[i][x] == 1 + mem[i][x - d[i]]) {
        cout << d[i];
        trace(i, x - d[i]);
    } else {
        trace(i-1, x);
    }
}

int main() {
    cout << "hello";
    // not work yet
}