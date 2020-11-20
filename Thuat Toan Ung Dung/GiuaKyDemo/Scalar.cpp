#include <vector>
#include <algorithm>
#include <stdlib.h> 
#include <iostream>

using namespace std;

int Scalar(vector<int> x, vector<int> y, int n){
	int total_vector = 0;
	
	for (int i=0; i< n ; i++) {
		total_vector += (x[i] + y[i]);
	}
	
	return total_vector;
}

int main(){
	
	int test, n;
	cin >> test;
	
	int Case[test];
	
	for (int i=0; i < test ; i++){
		cin >> n;
		
		vector<int> x;
		for (int i=0; i<n; i++) {
			int num;
			cin>> num;
			x.push_back(num);
		}
		
		vector<int> y;
		for (int i=0; i<n; i++) {
			int num;
			cin>> num;
			y.push_back(num);
		}
		
		sort(x.begin(), x.end());
		sort(y.begin(), y.end(), greater<int>());
//		Case[test] = Scalar( x, y, n);) work not
		
		int rs =0 ;
		for (int i =0; i<n ; i++){
			rs += (x[i] * y[i]);
		}
		Case[i] = rs;
		
	}
	
	for (int i=0; i<test; i++) {
		cout << "Case #" << i+1 << ": " << Case[i] << endl;
	}
	
	
	return 0;
}
