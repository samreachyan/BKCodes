#include <vector>
#include <list>
#include <iostream>
#include <queue>
using namespace std;

void bfs(vector< list<int> > adj) {
   int n = adj.size() - 1;
   vector<bool> was(n + 1);
   queue<int> Q;
   for (int start = 1; start <= n; ++start) {
       if (was[start]) continue;
       Q.push(start);
       was[start] = true;
       while (!Q.empty()) {
           int u = Q.front();
           cout << u << endl;
           Q.pop();
           for (int v : adj[u]) {
               if (was[v]) continue;
               was[v] = true;
               Q.push(v);
           }
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
    bfs(adj);

    return 0;
}