#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution {
private:
    void dfs(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& ls) {
        vis[node] = 1;
        ls.push_back(node);
        for (int neighbor : adj[node]) {
            if (!vis[neighbor]) {
                dfs(neighbor, adj, vis, ls);
            }
        }
    }

public:
    vector<int> dfsOfGraph(int V, vector<vector<int>>& adj) {
        vector<int> vis(V, 0);
        vector<int> ls;
        dfs(0, adj, vis, ls);  // Starting DFS from node 0
        return ls;
    }
};

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector<int>& ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> adj(V);
    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (u v) separated by spaces:\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        addEdge(adj, u, v);
    }

    Solution obj;
    vector<int> ans = obj.dfsOfGraph(V, adj);
    cout << "DFS Traversal:" << endl;
    printAns(ans);

    return 0;
}
