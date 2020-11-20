#include <bits/stdc++.h>
using namespace std;

int n, a[100005], nex[100005], res[100005], pos[100005];

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        pos[i] = i;
    for (int i = 1; i <= n; ++i)
        nex[i] = i+1;
    for (int i = n; i >=1; --i){
        int j = nex[i];
        while (a[i] < a[j]){
            nex[i] = nex[j];
            j = nex[i];
        }
    }

    for (int i = n-1; i >= 1; --i){
        int j = nex[i];
        if(j != n+1 && nex[j] != n+1){
            nex[i] = nex[j];
        }
    }
    for (int i = n; i >= 1; --i){
        int j = nex[i];
        res[i] = -1;
        while (j <= n){
            if (a[i] > a[j]){
                res[i] = pos[j] - i - 1;
                pos[i] = pos[j];
                j = pos[j];
                j++;
                continue;
            }
            if (a[i] == a[j]){
                pos[i] = pos[j];
            }
            j = nex[j];
            continue;
        }
    }

    for (int i = 1; i <= n; ++i){
        cout << res[i] << ' ';
    }
    return 0;
}