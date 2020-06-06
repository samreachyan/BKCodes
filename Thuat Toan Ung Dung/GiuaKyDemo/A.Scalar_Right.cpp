#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int T;
    cin >> T;
 
    for (int j=0; j<T; j++){
        int n;
        cin >> n;
        long long x[n], y[n], min = 0;
        for (int i=0; i<n; i++){
            cin >> x[i];
        }
 
        for (int i=0; i<n; i++){
            cin >> y[i];
        }
 
        sort(x, x+n);
        sort(y, y+n);
        for (int i=0; i<n; i++){
            min += x[i]*y[n-1-i];
        }
        cout << "Case #" << j+1 << ": " << min << endl;
    }
 
    return 0;
}
