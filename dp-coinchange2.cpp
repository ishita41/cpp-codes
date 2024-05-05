#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int amount;
    cin >> amount;
    vector<vector<int>> dp(n, vector<int>(amount + 1, 0));

    for(int i = 0; i <= amount; i++) {
        if(i == 0 || i % a[0] == 0) {
            dp[0][i] = 1;
        } else {
            dp[0][i] = 0;
        }
    }

    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= amount; j++) {
            int notTake = dp[i - 1][j];
            int take = 0;
            if(a[i] <= j) {
                take = dp[i][j - a[i]];
            }
            dp[i][j] = take + notTake;
        }
    }

    cout << dp[n - 1][amount];
    return 0;
}
