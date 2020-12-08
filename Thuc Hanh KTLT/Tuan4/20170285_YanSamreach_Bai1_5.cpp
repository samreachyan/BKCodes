#include <vector>
#include <list>
#include <iostream>
#include <stack>
using namespace std;

void dfs(vector< list<int> > adj) {
   int n = (int)adj.size() - 1;
   stack<int> S;
   vector<bool> was(n + 1);
   vector<bool> printed(n + 1);
   for (int start = 1; start <= n-2; start++)
   {
       if (was[start]) continue;
       S.push(start);
       was[start] = true;
       while (!S.empty())
       {
           int u = S.top();
           if (!printed[u]) {
               printed[u] = true;
               cout << u << endl;
           }
           if (!adj[u].empty())
           {
               int v = adj[u].front();
               adj[u].pop_front();
               if (was[v]) continue;
               was[v] = true;
               S.push(v);
           }
           else S.pop();
       }
   }
}

int main() {
    int n = 7;
    vector< list<int> > adj;
    adj.resize(n + 1);
    adj[1].push_back(2);
    adj[2].push_back(4);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[5].push_back(2);
    adj[2].push_back(7);
    adj[6].push_back(7);
    dfs(adj);

    return 0;
}