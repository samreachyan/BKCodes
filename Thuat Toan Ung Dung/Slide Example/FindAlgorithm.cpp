#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int main(){
	int myints [] = { 40, 30, 10, 20};
	int *p;
	
	p = find (myints, myints + 4, 30);
	
	if ( p != myints + 4) 
		cout << "Gia tri 30 xuat hien trong mang myints tai phan tu thu : " << (p-myints+1)<< endl;
	else 
		cout << "Gia tri 30 khong xuat hien trong mang myints " << endl;
		
	vector <int> myvector (myints, myints+4);
	vector <int>::iterator it;
	
	it = find (myvector.begin(), myvector.end(), 30);
	
	if (it != myvector.end())
		cout << "Gia tri 30 xuat hien trong vector myvector tai phan tu thu : " << (it-myvector.begin()+1) << endl;
	else 
		cout << "Gia tri 30 khong xuat hien trong vector myvector " << endl; 
	
	
}
