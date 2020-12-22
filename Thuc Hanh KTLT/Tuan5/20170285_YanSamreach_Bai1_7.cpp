#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int n;
    cin >> n;
    int ans = 0, sum = 0;
    while (n--) {
        int k, t;
        cin >> k >> t;
        while (k--) {
            int a;
            cin >> a;
            sum += t * a;
            ans = max(ans, -sum);
        }
    }
    cout << ans;
}