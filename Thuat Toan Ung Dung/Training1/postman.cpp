#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int n, max;
	cin >> n >> max;
	int u[n], v[n];
	// nhap vao du lieu cua khach hang
	for (int i=0; i<n ; i++){
		cin >> u[i] >> v[i];
	}
	
	//	sort list 
	for (int i=0; i<n-1 ;i++) {
		for(int j=i+1 ; j<n ; j++) {
			if ( u[i] > u[j]) {
				int tmpu = u[i];
				int tmpv = v[i];
				u[i] = u[j];
				v[i] = v[j];
				u[j]=tmpu;
				v[j] = tmpv;
			}
		}
	}
	
	// thuat toan 
	int diChuyen = 0;
	for (int i = n-1; i >= 0 ; i--) {
		int traHang = v[i];
		
//		while ( traHang > max) {
//			diChuyen += u[i]*2;
//			v[i] -= max;
//			traHang -= max;
//		}

		if (v[i] > max) {
			diChuyen = u[i] * 2 * (v[i]/max);
			v[i] = v[i]%max; 
		}
		
		if (v[i] < max && u[i] > 0) {
			diChuyen += abs(u[i]) * 2;
			v[i-1] -= max - v[i];
		} else if (v[i] < max && u[i] < 0) {
			diChuyen += abs(u[i-1]) * 2;
			v[i-1] -= max - v[i];
		}
		
	}
	
	cout << endl << diChuyen;
} 
