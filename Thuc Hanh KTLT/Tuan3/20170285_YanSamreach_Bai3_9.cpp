#include <iostream>
using namespace std;
int n, K1, K2;
int a[1000];
int dai = 0;

void solution() {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}

void Try(int k) {
    for (int i = 0; i <= 1; i++) {
        if (k == 1) {
            a[k] = i;
            if (i == 1) dai++;
            if (k == n) solution();
            else Try(k + 1);
        }
        else {
            if (dai < K1) {
                if (i == 1) {
                    a[k] = i;
                    dai++;
                    if (k == n) {
                        if (dai == K1) solution();
                    }
                    else Try(k + 1);
                    dai--;
                }
            }
            else {
                if (dai >= K1 && dai < K2) {
                    int dem;
                    a[k] = i;
                    dem = dai;
                    if (i == 1) dai++;
                    else dai = 0;
                    if (k == n) solution();
                    else Try(k + 1);
                    dai = dem;

                }
                else {
                    if (dai == K2) {
                        if (i == 0) {
                            a[k] = i;
                            dai = 0;
                            if (k == n) solution();
                            else Try(k + 1);
                            dai = K2;
                        }
                    }
                }
            }

        }
    }
}
int main() {    
    cin >> n >> K1 >> K2;
    Try(1);
    return 0;
}