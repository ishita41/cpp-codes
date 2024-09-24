#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool dfs(int node, vector<int>adj[], int vis[], int path[]){
    vis[node] = 1;
    path[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            if(dfs(it, adj, vis, path) == true) return true;
        }
        else if(path[it]){
            return true;
        }
    }
    path[node] = 0;
    return false;
}
bool cycle(int v, vector<int>adj[]){
    int vis[v] = {0};
    int path[v] = {0};
    for(int i = 0; i < v; i++){
        if(!vis[i]){
            if(dfs(i, adj, vis, path) == true) return true;
        }
    }
    return false;
}
int main(){
    int v, e;
    cin >> v >> e;
    vector<int>adj[v];
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    if(cycle(v, adj))
        cout << "Graph contains cycle." << endl;
    else
        cout << "Graph doesn't contain cycle." << endl;
    return 0;
}