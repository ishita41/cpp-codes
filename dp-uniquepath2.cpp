#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(a[0][i]==1) break;
        else dp[0][i]=1;
    }
    for(int i=0;i<n;i++){
        if(a[i][0]==1) break;
        else dp[i][0]=1;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (a[i][j] == 1) {
                dp[i][j] = 0; // Set to 0 if obstacle
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
    }

    cout<<dp[n-1][m-1];
}