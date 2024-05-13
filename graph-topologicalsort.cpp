#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void dfs(int node, int vis[], stack<int>& st, vector<int> adj[]) {
    vis[node] = 1;
    for (int i = 0; i < adj[node].size(); i++) {
        int neighbor = adj[node][i];
        if (!vis[neighbor]) {
            dfs(neighbor, vis, st, adj);
        }
    }
    st.push(node);
}

vector<int> topoSort(int V, vector<int> adj[]) {
    int vis[V] = {0};
    stack<int> st;
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, vis, st, adj);
        }
    }

    vector<int> ans;
    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main() {
    int V;
    
    cin >> V;

    vector<int> adj[V];
    int edges;
    
    cin >> edges;

    
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    vector<int> ans = topoSort(V, adj);

   
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
