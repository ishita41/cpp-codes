#include <iostream>
#include <vector>
using namespace std;

void addedge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool dfs(int node, vector<int> adj[], int parent, int vis[]) {
    vis[node] = 1;
    for (int i = 0; i < adj[node].size(); i++) {
        int neigh = adj[node][i];
        if (!vis[neigh]) {
            if (dfs(neigh, adj, node, vis) == true) return true;
        } else if (neigh != parent) return true;
    }
    return false;
}

bool iscycle(vector<int> adj[], int v) {
    int vis[v] = {0};
    for (int i = 0; i < v; i++) {
        if (!vis[i]) {
            if (dfs(i, adj, -1, vis) == true) return true;
        }
    }
    return false;
}

int main() {
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    for (int i = 0; i < e; i++) {
        int u, w;  
        cin >> u >> w;
        addedge(adj, u, w);
    }
    if (iscycle(adj, v)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
