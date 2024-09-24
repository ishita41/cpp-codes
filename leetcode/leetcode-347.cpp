#include<iostream>
#include<algorithm>
#include<vector>
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
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    vector<pair<int,int>>res;
    for(auto it : mp){
        res.push_back(make_pair(it.second,it.first));
    }
    sort(res.begin(),res.end(),greater<pair<int,int>>());
    vector<int>ans;
    for(int i=0;i<k;i++){
        ans.push_back(res[i].second);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}