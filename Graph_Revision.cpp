#include <bits/stdc++.h>
using namespace std;
// bool dfs(int ind,vector<int> &vis,vector<vector<int>> &adj, int par) {
//     vis[ind]=1;
//     for (auto it: adj[ind]) {
//         if (vis[it]==0) {
//             dfs(it,vis,adj,ind);
//         }
//         else if (it==par) {
//             return false;
//         }
//     }
//     return true;
// }
int main(){
    // CYCLE DETECTION IN UNDIRECTED GRAPH USING BFS

    vector<vector<int>> adj(5);
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[2].push_back(0);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);
    int n=adj.size();
    vector<int> vis(n,0);
    vis[0]=1;
    // queue<pair<int,int>> q;
    // q.push({0,-1});

    // while (!q.empty()) {
    //     auto [ch,par]=q.front();
    //     q.pop();
    //     for (auto it: adj[ch]) {
    //         if (vis[it]!=1) {
    //             vis[it]=1;
    //             q.push({it,ch});
    //         }
    //         else if (it!=par) {
    //             cout<<"True";
    //             return 0;
    //         }
    //     }
    // }
    // cout<<"False";
    // return 0;

    // CYCLE DETECTION IN UNDIRECTED GRAPH USING DFS

    // for (int i=0;i<n;i++) {
    //     if (vis[i]==0) {
    //         cout<<dfs(i,vis,adj,-1);
    //     }
    // }
    // return 0;

    // CYCLE DETECTION IN DIRECTED GRAPH USING KAHN ALGORITHM

    // vector<int> indegree(n,0);
    // for (int i=0;i<n;i++) {
    //     for (auto it: adj[i]) {
    //         indegree[it]++;
    //     }
    // }
    // queue<int> q;
    // for (int i=0;i<n;i++) {
    //     if (indegree[i]==0) {
    //         q.push(i);
    //     }
    // }
    // vector<int> v1;
    // while (!q.empty()) {
    //     int node=q.front();
    //     q.pop();
    //     v1.push_back(node);
    //     for (auto it: adj[node]) {
    //         indegree[it]--;
    //         if (indegree[it]==0) {
    //             q.push(it);
    //         }
    //     }
    // }
    // if (v1.size()!=n) {
    //     cout<<"True";
    // }
    // else {
    //     cout<<"False";
    // }

    // NOW SHORTEST PATH WHEN UNWEIGHTED GRAPH
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});
    vector<int> dist(n,-1);
    dist[0]=0;
    while (!pq.empty()) {
        auto [dis, node]=pq.top();
        pq.pop();
        for (auto it: adj[node]) {
            if (dist[it]==-1) {
                pq.push({dis+1,it});
                dist[it]=dis+1;
            }
        }
    }
    for (int i=0;i<n;i++) {
        cout<<dist[i]<<" ";
    }

}
