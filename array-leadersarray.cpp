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
    vector<int>ans;
    ans.push_back(a[n-1]);
    int max=a[n-1];
    ans.push_back(max);
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max=a[i];
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}