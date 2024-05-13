#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool print(int idx,vector<int>&a,vector<int>&ans,int sum,int csum,int n){
    if(idx==n){
        if(csum==sum){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            return true;
        }
        return false;
    }
    ans.push_back(a[idx]);
    bool found=print(idx+1,a,ans,sum,csum+a[idx],n);
    ans.pop_back();
    if(found) return true;
    return print(idx+1,a,ans,sum,csum,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans;
    int t;
    cin>>t;
    bool found=print(0,a,ans,t,0,n);
    if(!found){
        cout<<"not found";
    }
}