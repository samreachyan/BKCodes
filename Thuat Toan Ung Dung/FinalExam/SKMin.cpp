#include <bits/stdc++.h>
using namespace std;

string s,res,t;
int n,k,dem;

int main() {
	cin >> s >> k;
	stack<char> st;
	st.push(s[0]);
	dem = 1;
    for (int i = 1; i < s.length(); i++) {
        while (s[i] > st.top() && (dem+s.length()-i) > k) {
            st.pop();
            dem--;
            if(st.empty()) break;
        }
        st.push(s[i]);
        dem++;
    }
    string res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    for(int i = res.length()-1,j=0; (i >= 0 && j < k); i--,j++){
        cout << res[i];
    }
}