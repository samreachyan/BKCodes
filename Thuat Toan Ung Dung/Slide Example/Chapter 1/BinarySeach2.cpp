#include <bits/stdc++.h>
using namespace std;

bool myfunction (int i, int j) {
	return i<j;
}

int main() {
	int myint[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
	
	vector <int> v(myint, myint+9);
	
	sort (v.begin(), v.end());
	cout << "Tim gia tri 3 co xuat hien trong vector hay khong ??" << endl;
	if (binary_search (v.begin(), v.end(), 3, myfunction)) 
		cout << "Found " << endl;
	else cout << "Not Found .. !" << endl;
	
	sort (v.begin(), v.end(), myfunction);
	
	cout << "Tim gia tri 6 co xuat hien trong vector hay khong??" << endl;
	if (binary_search(v.begin(), v.end(), 6, myfunction)) cout << "Found ... " << endl;
	else cout << "Not Found .. !!" << endl;
	
	return 0;
}
