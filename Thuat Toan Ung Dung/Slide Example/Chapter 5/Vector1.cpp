#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> adj[4];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[2].push_back(0);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);

    vector <pair <int, int> > graph[4];
    graph[0].push_back(make_pair(1, 10));
    graph[1].push_back(make_pair(0, 10));
    graph[0].push_back(make_pair(2, 13));
    graph[2].push_back(make_pair(0, 13));
    graph[1].push_back(make_pair(2, 5));
    graph[2].push_back(make_pair(1, 5));
    graph[2].push_back(make_pair(3, 7));
    graph[3].push_back(make_pair(2, 7));



    vector <int> gquiz; 
    int sum = 0; 
    gquiz.push_back(10); 
    gquiz.push_back(20); 
    gquiz.push_back(30); 
  
    while (!gquiz.empty()) 
    { 
        sum += gquiz.back(); 
        gquiz.pop_back(); 
    } 
    cout << sum << endl;
    
}