#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int n, start; 
int c[MAX][MAX];
int f = 0;

void findTravel(int a, int b){
    f += c[a][b];
    // cout << "Find min : " << f << endl;
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> c[i][j];
		}
	}

    cin >> start;
    int travel[start];

    for (int i = 0; i < start ; i++){
        cin >> travel[i];
    }
    
    for (int i = 0; i < start-1  ;i++)
    {
        // cout << "work " << travel[i] << " - " << travel[i+1] << endl;
        findTravel(travel[i], travel[i+1]);
    }    
    cout << f;
    
	return 0;	
}
