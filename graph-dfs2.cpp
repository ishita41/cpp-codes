#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void addedge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfst(int node, vector<vector<int>>& adj, vector<int>& vis) {
    vis[node] = 1;
    cout << node << " ";
    for (int i = 0; i < adj[node].size(); i++) {
        int neigh = adj[node][i];
        if (!vis[neigh]) {
            dfst(neigh, adj, vis); // Pass the neighbor node instead of i
        }
    }
}

int main() {
    int v, e;
    cin >> v >> e;
    vector<vector<int>> adj(v);
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        addedge(adj, u, v);
    }

    vector<int> vis(v, 0); // Initialize visited array
    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            dfst(i, adj, vis);
        }
    }

    return 0;
}
