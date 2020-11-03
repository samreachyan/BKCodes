#include <bits/stdc++.h>
using namespace std;
int n;

int main() {
	cin >> n;
	string s = "/";
	while(n--){
        string x;
        cin >> x;
        if(x == "pwd") {
            cout << s << '\n';
            continue;
        }
        string y;
        cin >> y;
        string t = "";
        if(y[0] == '/'){
            s = "";
        }
        for(int i = 0; i < y.length(); ++i){
            if(y[i] == '/'){
                s += t + '/';
                t = "";
                continue;
            }
            if(y[i] == '.'){
                ++i;
                s.pop_back();
                while(s[s.length()-1] != '/') s.pop_back();
                s.pop_back();
                continue;
            }
            t+= y[i];
        }
        s+= t + '/';
	}

    return 0;
}