#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[5005];
int dem[100005];
long long res;

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i){
        for(int j = i+1; j <= n; ++j)
            ++dem[a[j]];
        for(int j = i+1; j <=n; ++j){
            --dem[a[j]];
            int t = k - a[i] - a[j];
            if(t > 0){
                res += dem[t];
            }
        }
    }
    cout << res;

    return 0;
}
