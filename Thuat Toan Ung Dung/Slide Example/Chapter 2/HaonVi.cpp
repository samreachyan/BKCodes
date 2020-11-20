#include <iostream>
using namespace std;

int n, m, count;
int a[100];

int Ghinhan(){
	int i, j;
	count++;
	cout << "Hoan vi thu " << count << " : ";
	for ( i=1; i<=n ; i++)
		cout << a[i] << " ";
	cout << endl;
}

bool UCV(int j, int k){
	int i;
	for (i=1; i<=k ; i++)
		if (j==a[i]) return false;
	return true;
}

void Try(int k){
	int j;
	for (j=1; j<=n; j++){
		if (UCV(j,k)) {
			a[k] = j;
			if (k==n) Ghinhan();
			else Try(k+1);
		}
	}
}

int main(){
	cout<<("Nhap n = "); 
	cin>>n;
	count = 0; Try(1);
	cout<<"So hoan vi = " << count;
}
