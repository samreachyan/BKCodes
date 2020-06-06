#include <bits/stdc++.h>
using namespace std;

//not work 

int mem[100];
int fibonacci(int n) {
	if (n <= 2){
		if (n <= 2) return 1;
		if (mem[n] != -1) return mem[n];
		int res = fibonacci(n-2) + fibonacci(n-1);
		mem[n] = res;
		return res;
	}
}

int main() {

	for (int i = 0; i < 100; i++) mem[i] = -1;
	
	cout << fibonacci(4);
}
