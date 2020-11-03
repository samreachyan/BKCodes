#include <bits/stdc++.h>
using namespace std;

int dd[1000005];

int main() {
    int f, s, g, u, d;
	cin >> f >> s >> g >> u >> d;
	queue <pair<int,int> > q;
	q.push(make_pair(s,0));
	while(!q.empty()){
        int c = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (c == g) {
            cout << cnt;
            return 0;
        }
        int temp = c+u;
        if (temp <= f && !dd[temp]) {
            dd[temp] = 1;
            q.push({temp,cnt+1});
        }
        temp = c-d;
        if (temp >= 1 && !dd[temp]) {
            dd[temp] = 1;
            q.push({temp,cnt+1});
        }
	}
	cout << "use the stairs";
    return 0;
}