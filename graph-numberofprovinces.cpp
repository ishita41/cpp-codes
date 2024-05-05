#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    // dfs traversal function
    void dfs(int node, vector<int> adjLs[], int vis[]) {
        // mark the node as visited
        vis[node] = 1;
        for (int i = 0; i < adjLs[node].size(); i++) {
            int neighbor = adjLs[node][i];
            if (!vis[neighbor]) {
                dfs(neighbor, adjLs, vis);
            }
        }
    }

public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjLs[V];

        // convert adjacency matrix to adjacency list
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (adj[i][j] == 1 && i != j) {
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }
        int vis[V] = {0};
        int cnt = 0;
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                cnt++;
                dfs(i, adjLs, vis);
            }
        }
        return cnt;
    }
};

int main() {
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;
    vector<vector<int>> adj(V, vector<int>(V));

    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> adj[i][j];
        }
    }

    Solution ob;
    cout << "Number of provinces: " << ob.numProvinces(adj, V) << endl;

    return 0;
}
