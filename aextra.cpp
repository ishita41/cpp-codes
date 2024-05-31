#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    map<int,int>mp;
    int sum=0;
    int len=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            len=max(len,i+1);
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            int ans=i-mp[rem];
            len=max(len,ans);
        }
        mp[sum]=i;
    }
}