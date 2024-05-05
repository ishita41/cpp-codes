#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t;
    cin >> t;
    vector<vector<int>> dp(n, vector<int>(t + 1, 0));
    for(int j = 0; j <= t; j++) {
        if(j == 0 || j % a[0] == 0)
            dp[0][j] = 1;
        else
            dp[0][j] = 0;
    }
    for(int i = 1; i < n; i++) {
        for(int j = 0; j <= t; j++) {
            int take = 0;
            int nottake = dp[i - 1][j];
            if(a[i] <= j) {
                take = dp[i][j - a[i]];
            }
            dp[i][j] = take + nottake;
        }
    }
    cout << dp[n - 1][t];
    return 0;
}
