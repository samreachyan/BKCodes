#include <bits/stdc++.h>
#include <string.h>
using namespace std;

string name;
int n;

void solve(){
    int i = 0;
    int position = 0;
    string final;

    while(i < n) {
        char tem = name[position];
        // find position and select biggest character 
        for (int i = position + 1; i < name.length(); i++){
            // if tem greater than current 
            if (tem - name[i] < 0 ){
                tem = name[i];
                position = i + 1;
            }
        }        
        final += tem; // save char from tem
        i++;
    }
    cout << final << endl;
}

int main(){
    cin >> name;
    cin >> n;
    solve();
}