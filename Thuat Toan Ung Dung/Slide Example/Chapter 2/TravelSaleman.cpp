#include <iostream>
using namespace std;

	//	0 3 14 18 15
	//	3 0 4 22 20
//C   = 17 9 0 16 4
	//	9 20 7 0 18
	//	9 15 11 5 0
	
void Try(int k){
	for (int v = 1; v <= n ; i++){
		if (visited[v] == false){
			x[k] = v;
			visited[v] = true;
			f = f + c(x[k-1], x[k]);
			if (k == n) {
				if ( f + c(x[n], x[1]) < f* )
					f* = f + c(x[n], x[1]);
			} else {
				g = f + (n-k+1) * Cmin ;
				if ( g < f* ) Try(k+1);
			}
		}
		f = f - c(k[k-1], k[k]);
		visited[v] = false;
	}
}

void BranchAndBound() {
	f* = 99999999;
	for (v=1 ; v<=n ; v++){
		visited[v] = false;
	}
	f = 0; 
	x[1] = 1;
	visited[x[1]] = true;
	Branch(2);
	return f*;
}

//no work
