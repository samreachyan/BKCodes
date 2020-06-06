// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int a[1000];
int mem[1000];
bool comp[1000];
// memset(comp, 0, sizeof(comp));

void trace(int i) {
	if (i != 1 && mem[i] == a[i] + mem[i-1]) 
		trace(i-1);
	cout << a[i] << endl;
}

int max_sum(int i) {
	if(i==1) return a[i];
	if (comp[i]) return mem[i];
	int res = max(a[i], a[i] + max_sum(i-1));
	mem[i] = res;
	comp[i] = true;
	return res;
}
int main() {
	cout << "Hello";
}