#include <iostream>
using namespace std;

int n, count;
int b[100];

void Ghinhan(){
	int i, j;
	count ++;
	cout << "Xau thu "<< count << " : ";
	for ( i = 1; i <= n; i++){
		j = b[i];
		cout << j << " ";
	}
	cout << endl;
}

void Try(int k){
	int j;
	for (j=0; j<=1; j++){
		b[k] = j;
		if ( k == n) Ghinhan();
		else Try(k+1);
	}
}

int main(){
	cout << "Nhap n = ";
	cin >> n;
	count = 0;
	Try(1);
	cout << "So luong xau = " << count << endl;
}
