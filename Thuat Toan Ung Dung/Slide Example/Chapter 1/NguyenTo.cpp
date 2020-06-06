#include <iostream>
#include <math.h>
using namespace std;

bool kiemTraNguyenTo (int n){
	if (n < 2) {
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	for (int i = 1; i < 50; i++){
		if ( kiemTraNguyenTo(i)){
			cout << i << " ";
		}
	}
}
