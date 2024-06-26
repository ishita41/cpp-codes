#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    
    vector<vector<int>>dp(n,vector<int>(m,1));
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[n-1][m-1];
}