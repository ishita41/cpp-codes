#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Create an adjacency list of pairs of the form node1 -> {node2, edge weight}
        vector<pair<int, int>> adj[n + 1];
        for (auto it : edges) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        // Create a priority queue for storing nodes and distances
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;

        // Create arrays for distances and parent nodes
        vector<int> dist(n + 1, 1e9), parent(n + 1);
        for (int i = 1; i <= n; i++)
            parent[i] = i;

        dist[1] = 0;
        pq.push({0, 1});

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int dis = it.first;

            for (auto it : adj[node]) {
                int adjNode = it.first;
                int edW = it.second;

                if (dis + edW < dist[adjNode]) {
                    dist[adjNode] = dis + edW;
                    pq.push({dis + edW, adjNode});
                    parent[adjNode] = node;
                }
            }
        }

        if (dist[n] == 1e9)
            return {-1};

        vector<int> path;
        int node = n;

        while (parent[node] != node) {
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);

        reverse(path.begin(), path.end());
        return path;
    }
};

int main() {
    int V, E;
    cout << "Enter the number of nodes (V) and edges (E): ";
    cin >> V >> E;

    vector<vector<int>> edges(E);
    cout << "Enter the edges in the format 'source destination weight':" << endl;
    for (int i = 0; i < E; i++) {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        edges[i] = {source, destination, weight};
    }

    Solution obj;
    vector<int> path = obj.shortestPath(V, E, edges);

    if (path[0] == -1) {
        cout << "No path exists from node 1 to node " << V << endl;
    } else {
        cout << "Shortest path from node 1 to node " << V << " is:";
        for (int i = 0; i < path.size(); i++) {
            cout << " " << path[i];
        }
        cout << endl;
    }

    return 0;
}
