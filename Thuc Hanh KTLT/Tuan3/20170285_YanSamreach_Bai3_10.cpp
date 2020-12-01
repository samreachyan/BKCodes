#include <bits/stdc++.h>
using namespace std;
#define MAX 17

int m, n[MAX], h[MAX];
int x[MAX], num[MAX];

void print(int j) {
    for (int i = 1; i <= n[j]; i++) cout << x[i];
    cout << '\n';
}

void process(int i, int j) {
    for (int v = 0; v <= 1; v++) {
        x[i] = v;
        num[i] = num[i - 1] + v;
        if (num[i] > h[j]) return;
        if (i == n[j]) {
            if (num[i] == h[j]) print(j);
        }
        else process(i + 1, j);
    }
}

int main() {
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> n[i] >> h[i];
    }
    for (int j = 0; j < m; j++) {
        process(1, j);
        cout << endl;
    }
    return 0;
}