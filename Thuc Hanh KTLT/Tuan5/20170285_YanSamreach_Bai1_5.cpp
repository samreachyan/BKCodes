#include <bits/stdc++.h>
using namespace std;

int main(){
    bool found = false;
    int a;
    cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || (a % 100 == 0))
        found = true;
    
    if (found) cout << "Yes";
    else cout << "No";
}