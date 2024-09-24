#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void helper(int idx,int a[],vector<int>&ds,vector<vector<int>>&ans,int n){
    if(idx==n){
        ans.push_back(ds);
        return;
    }
    ds.push_back(a[idx]);
    helper(idx+1,a,ds,ans,n);
    ds.pop_back();
    helper(idx+1,a,ds,ans,n);
}
void print(vector<vector<int>>ans){
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
    vector<int>ds;
    vector<vector<int>>ans;
    helper(0,a,ds,ans,n);
    print(ans);
}