#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    int n=s.size();
    int m=t.size();
    int ans=0;
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            ans=max(dp[i][j],ans);
        }
    }
    cout<<ans;
}