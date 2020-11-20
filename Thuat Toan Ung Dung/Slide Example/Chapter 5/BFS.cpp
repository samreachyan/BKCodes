#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool *visited;
class Graph {
    int v;
    list <int> * adj;
    public: 
        int numVertex();
        Graph (int v);
        void addEdge(int u, int v);
        void BFS(int s);
        void DFS(int s);
        void topoSort();
        void DFS_topo(int s, stack <int> &Stack);
        void XoaDanDinh_topo();
};

// class add v into list
Graph::Graph(int v) {
    this->v = v;
    adj = new list<int>[v];
}

// class return all value from graph
int Graph::numVertex() {
    return v;
}

// add v into u graph
void Graph::addEdge(int u, int v){
    adj[u].push_back(v);
}

void Graph::BFS(int s) {
    queue<int> q;
    visited[s] = true;
    q.push(s);
    list<int>::iterator i;
    while(!q.empty()) {
        // Dequeue a vertex from queue and print 
        s = q.front();
        cout << s << " "; 
        q.pop();

        // Check out queue
        for (i = adj[s].begin(); i != adj[s].end(); ++i){
            int v = *i;
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
        
    }
}

void Graph::DFS(int s) {
    visited[s] = true;
    cout << s << " ";

    list<int>::iterator i;
    for (i = adj[s].begin(); i != adj[s].end(); ++i){
        int v = *i;
        if (!visited[v]){
            visited[v] = true;
            DFS(v);
        }
    }
}

void Graph::DFS_topo(int s, stack<int> &Stack){
    visited[s] = true;
    list<int>::iterator i;

    for(i = adj[s].begin(); i != adj[s].end(); ++i){
        int v = *i;
        if (!visited[v]) DFS_topo(v, Stack);
    }
    Stack.push(s);
}

void Graph::topoSort(){
    for(int s = 0; s < v; s++) visited[s] = false;
    stack<int> Stack;

    for(int s = 0; s < v; s++)
        if (visited[s] == false) DFS_topo(s, Stack);

    while(Stack.empty() == false){
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

void Graph::XoaDanDinh_topo(){
    vector<int> in_degree(v,0);
    for(int V = 0; V < v; V++){
        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); i++) in_degree[*i]++;
    }

    queue<int> q;
    for(int V = 0; V < v; V++)
    if (in_degree[v] == 0) q.push(V);

    int num = 0;
    vector<int> top_order;
    while(!q.empty()){
        int V = q.front();
        q.pop();
        num++;
        top_order.push_back(V);

        list<int>::iterator it;
        for(it = adj[v].begin(); it != adj[v].end(); it++){
            int u = *it;
            in_degree[u]--;
            if (in_degree[u] == 0) q.push(u);
            if (num != V) {
                cout << "Do thi co cho trinh" << endl;
                return;
            }

            for (int i = 0; i < top_order.size(); i++) cout << top_order[i] << " ";
            cout << endl;
        }
    }
}

int main() {
    Graph g(5);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(4,0);
    g.addEdge(3,0);
    g.addEdge(0,2);

    int numV = g.numVertex();
    visited = new bool[numV];

    for (int i = 0; i < numV; i++) visited[i] = false;

    cout << "BFS(1) : " ;
    g.BFS(1);
    cout << endl;

    for (int i = 0; i < numV; i++) visited[i] = false;
    cout << "DFS(1) : " ;
    g.DFS(1);
    cout << endl;

    cout << "Thu tu topo : ";
    g.topoSort();
    cout << endl;

    g.XoaDanDinh_topo();
    
    return 0;
}