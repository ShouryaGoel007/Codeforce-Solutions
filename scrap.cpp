#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> edge={{0,4,2}, {0,5,3}, {5,4,1}, {4,6,3}, {4,2,1}, {6,1,2}, {2,3,3}, {1,3,1}};
    int n=7,m=8;
    vector<vector<pair<int,int>>> adj(n);
    for (auto it: edge){
        adj[it[0]].push_back({it[1],it[2]});
    }
    vector<int> dist(n,INT_MAX);
    dist[0]=0;
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int u=q.front();
        q.pop();
        for (auto it:adj[u]) {
            if (dist[it.first]>dist[u]+it.second) {
                dist[it.first]=dist[u]+it.second;
                q.push(it.first);
            }
        }
    }
    for (auto it: dist) {
        if (it!=INT_MAX) cout<<it<<" ";
        else cout<<-1<<" ";
    }
}