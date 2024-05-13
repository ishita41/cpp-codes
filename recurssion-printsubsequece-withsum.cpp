#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int idx,vector<int>&a,vector<int>&ans,int sum,int csum,int n){
    if(idx==n){
        if(csum==sum){
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
               cout<<endl;
        }
        return ;
    }
    ans.push_back(a[idx]);
    print(idx+1,a,ans,sum,csum+a[idx],n);
    ans.pop_back();
    print(idx+1,a,ans,sum,csum,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    vector<int>ans;
    print(0,a,ans,t,0,n);
}