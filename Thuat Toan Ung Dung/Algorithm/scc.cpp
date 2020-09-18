#include<bits/stdc++.h>

using namespace std;

#define N 100001

int n,m;
vector<vector< int > > V_input(N);

void input()
{
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	int i,j;
	for(i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		V_input[u].push_back(v);
	}
//	for(i = 1; i <= n; i++)
//	{
//		for(j = 0; j < V_input[i].size(); j++)
//		{
//			cout << V_input[i][j] << " ";
//		}
//		cout << endl;
//	}
}

vector<int> low(N), num(N, -1);
vector<bool> incomp(N, false);
int curnum = 1;
stack<int> comp;
int countOfSCC = 0;

int scc(int u)
{
	comp.push(u);
	incomp[u] = true;
	low[u] = num[u]= curnum++;
	for(int i = 0; i < V_input[u].size(); i++)
	{
		int v = V_input[u][i];
		if(num[v] == -1)
		{
			scc(v);
			low[u] = min (low[u], low[v]);
		}
		else if(incomp[v]){
			low[u] = min (low[u], num[v]);
		}
	}
	if(num[u] == low[u])
	{
		countOfSCC ++;
		//printf("comp: ");
		while(true)
		{
			int cur = comp.top();
			comp.pop();
			incomp[cur] = false;
			//printf("%d, ", cur);
			if(cur == u)	break;
		}
		//printf("\n");
	}
}


int main()
{
	input();
	for(int i = 1; i <= n; i++)
	{
		if(num[i] == -1){
			scc(i);
		}
	}
	cout << countOfSCC ;
	return 0;
}
