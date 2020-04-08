#include <bits/stdc++.h>
using namespace std;

int n, dem;
int a[20];

void Ghinhan(){
	int i;
	dem++;
	cout << dem << ") ";
	for (i=1; i<=n ; i++)
		cout << a[i] << " ";
	cout << endl;
}

int UCVh (int j, int k){
	int i;
	for (i=1; i<k; i++){
		if ((j == a[i]) || (fabs(j-a[i] == k-i))) return 0;
	}
	return 1;
}

void Try(int k){
	for (int j=1; j<=n ; j++){
		if ( UCVh(j,k)) {
			a[k] = j;
			if (k == n) Ghinhan();
			else Try(k+1);
		}
	}
}

int main(){
	cout << "Nhap kich thuoc ban co : n = " ; 
	cin >> n;
	cout << "\n=== CAC CACH XEP QUAN HAU ===\n";
	dem = 0;
	Try(1);
	if (dem == 0) cout << "Khong co cach xep nao" << endl;
}
