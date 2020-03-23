//#include <iostream>
#include <bits./stdc++.h>
using namespace std;

string Sum ( string a, string b) {
	while (a.length() < b.length() ) a = '0' + a;
	while (b.length() < a.length() ) b = '0' + b;
	
	string result;
	int tong, nho = 0;
	int them = a.length();
	for (int i = them-1 ; i>=0 ; i--) {
		tong = (a[i]-'0') + (b[i]-'0') + nho;
		nho = tong/10;
		result.push_back(tong%10 + '0');
	}
	if ( nho == 1 ) result.push_back(nho+'0');
	reverse(result.begin(), result.end());
	return result;
}

int main() {
	string a, b;
	cin >> a >> b;
	cout << Sum(a,b);
}
