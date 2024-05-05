#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int amount;
    cin>>amount;
    vector<int>dp(amount+1,amount+1);
    dp[0]=0;
    for(int i=1;i<=amount;i++){
        for(int j=0;j<n;j++){
            int coin=a[j];
            if(i>=coin){
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
    }
    if(dp[amount]>amount ) cout<<-1;
    else cout<<dp[amount];
}