#include <bits/stdc++.h>
using namespace std;
int main(){
	int num, count=0, n, m, x;
	
	cin >> num;
	while (count != num) {
		cin >> n >> m;
		map <int, int> r;
		while (n--) cin >> x, r[x]++;
		while (m--) cin >> x, r[x]--;
		
		int sopheptinh = 0;
		for (map<int,int>::iterator it = r.begin(); it != r.end(); it++ )
			sopheptinh += abs(it->second);
			
		cout << sopheptinh << endl;
		count++;
	}
}
