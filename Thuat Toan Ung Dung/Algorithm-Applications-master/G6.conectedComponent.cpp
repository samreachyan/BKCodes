//Given a undirected graph G=(V,E) where V={1,…,N} is the number of nodes and the set E has M edges. 
//Compute number of connected components of G.
//
//Input
//Line 1: two positive integers N and M (1=N=105,1=M=105)
//Lline i+1 (i=1,…,M): contains two positive integers u and v which are endpoints of ith edge
//Output
//Write the number of connected components of G.
//
//Example
//input
//8 8
//1 2
//1 7
//1 8
//2 7
//4 5
//4 6
//5 6
//7 8
//output
//3


#include<iostream>
#include<set>
#include<vector>
using namespace std;
 
vector<vector<int> > V(100001);
int visited[100001];
int n,m;
 
int bfs()
{
	int i, j;
	int number = 0;
	set<int> s;
	set<int> ::iterator it;
	for(i = 1; i <=n ; i ++)
	{
		if(visited[i] == 0)
		{
			s.insert(i);
		
			while(!s.empty())
			{
				it = s.begin();
				int u = *it;
				//cout << u << " ";
				visited[u] = 1;
				for(j = 0; j < V[u].size(); j ++)
				{
					int v = V[u][j];
					if(visited[v] == 0)
						s.insert(v);
				}
				s.erase(it);
			}
			//cout << endl;
			number++;
		}
		
	}
	return number;
}
 
int main()
{
	cin >> n >> m;
	
	//khoi tao vector V
	int  i, j;
	for(i = 1; i <=m ; i++)
	{
		int u, v;
		cin >> u >> v;
		V[u].push_back(v);
		V[v].push_back(u);
	}
	
	//khoi tao mang visited
	for(i=1;i<=n;i++)
		visited[i] = 0;
//	for(i = 1; i <= n; i++)
//	{
//		for(j = 0; j < V[i].size(); j++)
//		{
//			cout << V[i][j] << " ";
//		}
//		cout << endl;
//	}
	
	int number = 0;
	number = bfs();
	cout << number;
	
	
	return 0;
}
