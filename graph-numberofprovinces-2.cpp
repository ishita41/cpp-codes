#include <iostream>
#include <vector>
using namespace std;
void dfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
    vis[node] = 1;
    for (int i = 0; i < adj.size(); ++i) {
        if (adj[node][i] == 1 && !vis[i]) {
            dfs(i, adj, vis);
        }
    }
}
void findprovince(vector<vector<int>>& adj, int n) {
    vector<int> vis(n, 0);
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (!vis[i]) {
            ans++;
            dfs(i, adj, vis);
        }
    }
    cout << "Number of provinces: " << ans << endl;
}

int main() {
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n));
    cout << "Enter the adjacency matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> adj[i][j];
        }
    }

    findprovince(adj, n);
    return 0;
}
