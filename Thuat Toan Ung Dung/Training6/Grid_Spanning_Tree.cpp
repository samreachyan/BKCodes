#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	cin >> n;
	vector<long long> t(n+1,0), f(n+1,0);
	t[1] = f[1] = 1;
    for (int i = 2; i <= n;++i) {
        t[i] = (3*t[i-1] + f[i-1]) % M;
        f[i] = (2*t[i-1] + f[i-1]) % M;
    }
    cout << t[n];
    return 0;
}