#include <bits/stdc++.h>
using namespace std;

int n, res;

int main() {
	cin >> n;
    n = 1000 - n;
    int a[] = {500,100,50,10,5,1};
    for (int i = 0; i < 6; ++i) {
        while (n >= a[i]){
            n-= a[i];
            ++res;
        }
    }
    cout << res;
    return 0;
}