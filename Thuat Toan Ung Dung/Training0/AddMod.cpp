#include <iostream>
using namespace std;

#include <math.h>

int main(){
	int long long a, b;
	cin >> a >> b;
	int long long kq = pow(10,9);
	
	cout << (a+b)%(kq+7) << endl;
}
