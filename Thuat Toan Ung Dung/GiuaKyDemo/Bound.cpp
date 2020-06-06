#include <iostream>
using namespace std;
 
int main(){
    int n, m, M;
    int count = 0;
    cin >> n >> m >> M;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
 
    for (int i=0; i<n; i++){
        int tmp = 0;
        for (int j=i; j<n; j++){
            tmp += a[j];
            if (tmp >= m && tmp <= M) count++;
        }
    }
    cout << count;
 
    return 0;
}
