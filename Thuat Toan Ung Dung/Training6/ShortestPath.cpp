#include<bits/stdc++.h>
using namespace std;

//int find_shortest_path(int start, int des, vector<vector<Edge>> a){
//	vector <long long> d(n+1,0);
//	vector <bool> visit(n+1, 0);
//	for (int i=0; i<=n; i++) d[i] = MAX;
//	d[start] = 0;
//	int step = n;
//	while(step--){
//		int min_vertex = 0;
//		for (int i=1; i<=n ; i++)
//			if (d[min_vertex] > d[i] && visit[i] == 0)
//				min_vertex = i;
//		visit[min_vertex] = 1;
//		for (Edge e: a[min_vertex]){
//			int v = e.v;
//			int w = e.w;
//			d[v] = min(d[v], d[min_vertex] + w);
//		}
//	}
//	return d[des];
//}
//
//int find_shortest_path2(int start, int des, vector<vector<Edge>> a){
//	vector <long long> d(n+1, 0);
//	for (int i=0; i <= n; i++) d[i] = MAX;
//	d[start] = 0;
//	priority_queue<pair<long long, int>> vertex_queue;
//	vertex_queue.push({-0, start});
//	while(!vertex_queue.empty()) {
//		pair <long long, int > p = verte_queue.top();
//		vector_queue.pop();
//		long long distance = -p.first;
//		int min_vertex = p.second;
//		if(d[min_vertex] < distance) continue;
//		for (Edge e: a[min_vertex]) {
//			int v = e.v;
//			int w = e.w;
//			if (d[v] > d[min_vertex] + w){
//				d[v] = d[min_vertex] + w;
//				vertex_queue.push({-d[v], v});
//			}
//		}
//	}
//	return d[des];
//}

int main(){
	cout << "Shortest Path" << endl;
}
