#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<vector<int>>& ad, int start, vector<bool>& visited) {
    visited[start] = true;
    cout << start << " ";

    for (int i : ad[start]) {
        if (!visited[i]) {
            dfs(ad, i, visited);
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> ad(n + 1);
    for (int i = 0; i <= n; i++) {
        ad[i].clear();
    }
    for (int i = 1; i <= e; i++) {
        int a, b;
        cin >> a >> b;
        ad[a].push_back(b);
        ad[b].push_back(a);
    }

    vector<bool> visited(n + 1, false);
    dfs(ad, 1, visited);

    return 0;
}
