#include <iostream>
using namespace std;
#include <math.h>

int main(){
	int long long kq = pow(10,9) + 7;
	int long long n, sum =0;
	
	cin >> n;
	
	int long long a[n];
	
	for (int long long i=0 ; i< n; i++) {
		cin >> a[i]; 
		s += a[i]; 
	}
	
	cout << s % kq;
}
