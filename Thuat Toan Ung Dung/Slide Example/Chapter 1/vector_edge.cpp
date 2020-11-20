#include <bits/stdc++.h>
using namespace std;

int main(){
//	vector <int> adj[10];
//	adj[0].push_back(1);
//	adj[0].push_back(6);
//	adj[0].push_back(8);
//	
//	cout << adj[0].back();

	vector <pair <int,int> > adj[4];
	
	adj[0].push_back(make_pair(1, 10));
	adj[1].push_back(make_pair(0, 10)); //d? th? vô hu?ng
	adj[0].push_back(make_pair(2, 13));
	adj[2].push_back(make_pair(0, 13)); //d? th? vô hu?ng
	adj[1].push_back(make_pair(2, 5));
	adj[2].push_back(make_pair(1, 5)); //d? th? vô hu?ng
	adj[2].push_back(make_pair(3, 7));
	adj[3].push_back(make_pair(2, 7)); //d? th? vô hu?ng
	
}
