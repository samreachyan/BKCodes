//Given a directed graph G=(V,A) where V={1,…,n} is the set of nodes. 
//Each arc (u,v)?A has weight w(u,v). 
//Given s,t  thuoc V, compute the shortest path from s to t.
//
//Input
//Line 1: n and m (1=n=105,1=m=106)
//Line i+1 (i=1,…,m): positive integers u, v, and w in which w is the weight of arc (u,v)
//Line m+2: s, t
//Output
//Write the weight of the shortest path found or -1 if no path from s to t exists.
//
//Example
//input
//5 7
//2 5 87
//1 2 97
//4 5 78
//3 1 72
//1 4 19
//2 3 63
//5 1 18
//1 5
//output
//97

#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int n,m;
int Edges[1000000][3];
int s,t;
bool visited[100000];
 
typedef pair<int, int> pii;
 
vector <vector<pii > > Vector_pair;
 
void input()
{
	int i,j;
	cin >> n >> m;
	for(i = 0; i < m ; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cin >> Edges[i][j];
		}
	}
	
	cin >> s >> t;
	
	//khoi tao mang visited va  Vector_pair
	for(i = 0; i < n; i ++){
		visited[i] = 0;
		vector<pii> v_pair;
		Vector_pair.push_back(v_pair);
	}
	visited[s - 1] = 1;
	
	//luu edges and weights to Vector_pair
	
	for(i = 0; i < m; i++)
	{
		int root = Edges[i][0];
		int edge = Edges[i][1];
		int weight = Edges[i][2];
		Vector_pair[root - 1].push_back(make_pair(edge - 1, weight));
	}
	
 
	
}
 
void sortPair(vector<pii> &v)
{
	int i,j;
	for(i = 0; i < v.size(); i++)
	{
		for(j = 0; j < v.size() - 1 - i; j++)
		{
			if(v[j].second > v[j + 1].second)
				swap(v[j], v[j+1]);
		}
	}
}


//sap xep cac canh co trong so tu nho den lon trong cac vector 
void sortVectorPair()
{
	int i,j;
	for(i=0; i < Vector_pair.size(); i++)
	{
		if(Vector_pair[i].size() > 1)
			sortPair(Vector_pair[i]);
	}
//	for( i = 0; i < n; i++){
//		for(j = 0; j < Vector_pair[i].size(); j++)
//		{
//			cout << Vector_pair[i][j].first << " " << Vector_pair[i][j].second << " ";
//		}
//		cout << endl;
//	}
}


//Thuc hien DFS tim do dai nho nhat tu u den v 
void DFS(int &ans, int next, int path)
{
	if(next == t - 1)
	{
		ans = min(ans, path);
		return;
	}
	int i;
	for( i = 0; i <Vector_pair[next].size() ; i++)
	{
		int edge = Vector_pair[next][i].first;
		int weight = Vector_pair[next][i].second;
//		if(edge == t - 1){
//			ans = min(ans, path);
//			return;
//		}
		path = path + weight;
		if(visited[edge]== 0 && path < ans){
			visited[edge] = 1;
			DFS(ans, edge, path);
			path = path - weight;
			visited[edge] = 0;
		}
		else{
			path = path - weight;
			break;
		}
	}
}
 
int main()
{
	
	input();
	sortVectorPair();
	int ans = 9999;
	DFS(ans, s - 1, 0);
	if(ans == 9999)
		ans = -1;
	cout << ans;
	return 0;
}

