#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findsum(int idx,int n,int a[],int t,int csum,vector<int>&ds,vector<vector<int>>&ans){
    if(idx==n){
        if(csum==t){
            ans.push_back(ds);
        }
        return;
    }
    if(csum+a[idx]<=t){
        ds.push_back(a[idx]);
        findsum(idx,n,a,t,csum+a[idx],ds,ans);
        ds.pop_back();
    }
    findsum(idx+1,n,a,t,csum,ds,ans);
}

void print(vector<vector<int>>&ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    vector<vector<int>>ans;
    vector<int>ds;
    findsum(0,n,a,t,0,ds,ans);
    print(ans);
    return 0;
}