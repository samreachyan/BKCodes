/* 
    date: 24-Nov-2020
*/
#include <bits/stdc++.h>
using namespace std;

struct state{
    int i, j;
    state(int _i = 0, int _j = 0): i(_i), j(_j) {}
};

int main() {
    int n, M;
    cin >> n >> M;
    int m[n+1];
    for (int i = 1; i <= n; ++i) 
        cin >> m[i];
        
    int x[n+1];
    stack<state> s;
    //# sum of selected weights
    int sum = 0;
    s.push(state(1, -1));
    while (!s.empty()){
        state &top = s.top();
        if (top.i > n){
            if (sum == M){
                for (int i = 1; i <= n; ++i){
                    if (x[i] == -1) cout << '-' << m[i];
                    if (x[i] == 1) cout << '+' << m[i];
                }
                cout << "=" << M << endl;
                exit(0);
            }
            s.pop();
            continue;
        }
        
        //# Khu de quy        
        if(top.j > -1){
        	sum -= m[top.i]*x[top.i];        	
		}
		if(top.j > 1){
			s.pop();
			continue;
		}
		x[top.i] = top.j;
		sum += m[top.i]*top.j;
		s.push(state(top.i+1,-1));
		top.j++;
    
    }
    cout << -1;
    return 0;
}