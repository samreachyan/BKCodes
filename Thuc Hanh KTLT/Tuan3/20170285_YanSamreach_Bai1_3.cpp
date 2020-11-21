#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int n; 
int a[MAX];
int c[MAX][MAX];
bool visitted[MAX];
int c_min = MAX*MAX;
int f = 0;
int f_min = MAX*MAX;

void Try(int k){
	for(int i = 2; i <= n; i++){
		if(!visitted[i]){
			a[k] = i;
			visitted[i] = true;
			f += c[a[k-1]][a[k]];
			if(k == n){
				f_min = min(f + c[a[n]][a[1]], f_min);	
			} else{
				int g = f + (n-k+1)*c_min;
				if(g < f_min) Try(k+1);
			}
			visitted[i] = false;
			f -= c[a[k-1]][a[k]];
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		visitted[i] = false;
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
			if(c[i][j] != 0) c_min = min(c_min, c[i][j]);
		}
	}
	
	a[1] = 1;
	visitted[a[1]] = true;
	Try(2);
	cout << f_min << "\n";
	
	return 0;	
}
