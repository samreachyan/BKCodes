#include <iostream>
using namespace std;

int n, m, count;
int a[100];
void Ghinhan(){
	int i;
	count++;
	cout << "Tap con thu " << count << " : ";
	for (i=1 ; i<=m ; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int k){
	int j;
	for (j=a[k-1]+1 ; j<= n-m+k; j++){
		a[k] = j;
		if (k==m) Ghinhan();
		else Try(k+1);
	}
}

int main(){
	cout << "Nhap n , m = ";
	cin >> n;
	cin >> m;
	a[0] = 0;
	count = 0;
	Try(1);
	
	cout << "So tap con " << m << " phan tu cua tap "<< n << " phan tu = " << count << endl;
}
