#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int solve(int idx, int W, int a[], int b[], vector<vector<int>>& dp) {
    if (idx == 0) {
        if (b[0] <= W) return a[0];
        return 0;
    }
    if (dp[idx][W] != -1) return dp[idx][W];
    
    int notTake = solve(idx - 1, W, a, b, dp);
    int take = INT_MIN;
    if (b[idx] <= W) {
        take = a[idx] + solve(idx - 1, W - b[idx], a, b, dp);
    }
    
    return dp[idx][W] = max(take, notTake);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int W;
    cin >> W;
    
    vector<vector<int>> dp(n, vector<int>(W + 1, -1));
    
    int result = solve(n - 1, W, a, b, dp);
    cout << "Maximum value: " << result << endl;

    return 0;
}
