#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    vector<int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==t){
                ans.push_back(a[i]);
                ans.push_back(a[j]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}