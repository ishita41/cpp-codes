#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>>dp(n,vector<int>(m));
    if(a[0][0]>0){
    dp[0][0]=a[0][0];
    }
    else{
        dp[0][0]=0;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]<0)
            {
                dp[i][j]=0;
            }
            else{
                if(j==m-1){
                dp[i][j]=dp[i][j]+a[i][j];
                }

            }
        }
        
    }
    cout<<dp[n-1][m-1];
}