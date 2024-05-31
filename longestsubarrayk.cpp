#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,int>mp;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int sum=0,len=0,maxlen=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            len=i-mp[rem];
            maxlen=max(maxlen,len);
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    cout<<maxlen;
}