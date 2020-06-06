//Given a undirected connected graph G=(V,E) where V={1,…,N}. 
//Each edge (u,v)?E has weight w(u,v). Compute minimum spanning tree of G.
//
//Input
//Line 1: N and M (1=N,M=105) in which N is the number of nodes and M is the number of edges.
//Line i+1 (i=1,…,M): contains 3 positive integers u, v, and w where w is the weight of edge (u,v)
//Output
//Write the weight of the minimum spanning tree found.
//
//Example
//input
//5 8
//1 2 1
//1 3 4
//1 5 1
//2 4 2
//2 5 1
//3 4 3
//3 5 3
//4 5 2
//output
//7

#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
struct edge{
	int u, v, w;
};
 
bool cmp(const edge &a, const edge &b)
{
	return a.w < b.w;
}
 
#define N 100001
 
int cha[N];
int hang[N];
 
int find(int u)
{
	if(cha[u] != u)
		cha[u] = find(cha[u]);
	return cha[u];
}
 
bool joinMst(int u, int v)
{
	u = find(u);
	v = find(v);
	if(u == v)
		return false;
	if(hang[u] == hang[v])
		hang[u]++;
	if(hang[u] < hang[v])
		cha[u] = v;
	else
		cha[v] = u;
	return true;
}
 
int main()
{
	int n, m;
	cin >> n >> m;
	vector<edge> Edges(m);
	for(int i = 0; i < m; i++)
	{
		cin >> Edges[i].u >> Edges[i].v >> Edges[i].w;
	}
	
	sort(Edges.begin() , Edges.end(), cmp);	
	
	for(int i = 0 ; i < n; i++)
	{
		cha[i] = i;
		hang[i] = 0;
	}
	unsigned long long mst_result = 0;
	for(int i = 0; i < Edges.size(); i++){
		if(joinMst(Edges[i].u, Edges[i].v))
		{
			mst_result+= Edges[i].w;
		}
	}
	cout <<mst_result;
	return 0;
}
