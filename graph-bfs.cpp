#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> bfs(vector<int> adj[], int n) {
    int vis[n] = {0};
    vis[0] = 1;
    queue<int> q;
    q.push(0);
    vector<int> bfs;
    while (!q.empty()) {
        int temp = q.front();
        q.pop();
        bfs.push_back(temp);
        for (int i = 0; i < adj[temp].size(); i++) {
            int neigh = adj[temp][i];
            if (!vis[neigh]) {
                vis[neigh] = 1;
                q.push(neigh);
            }
        }
    }
    return bfs;
}

void addedge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> ans) {
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int v, e;
    cin >> v >> e;
    vector<int> adj[v];
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        addedge(adj, u, v);
    }
    vector<int> ans = bfs(adj, v);
    print(ans);
    return 0;
}
