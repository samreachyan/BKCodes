#include <bits/stdc++.h>
using namespace std;

bool myfunction (int i, int j) {
	return (i<j);
}

int main(){
	int myints [] = {1,2,3,4,5,4,3,2,1};
	vector <int> v (myints, myints+9);
	
	sort (v.begin() , v.end() );
	cout << "Tim gia tri 3 co xuat hien trong vector v hay khong..." << endl;
	
	if (binary_search(v.begin(), v.end(),3 , myfunction)) {
		cout << "found " << endl;
	} else {
		cout << "Not found" << endl;
	}
	
	sort (v.begin(), v.end(), myfunction);
	cout << "Tim gia tri 6 co xuat hien hay khong ...." << endl;
	
	if (binary_search(v.begin(), v.end(), 6, myfunction)){
		cout << "Found number 6 " << endl;
	} else {
		cout << "Not found ." << endl;
	}
	
	return 0;
}
