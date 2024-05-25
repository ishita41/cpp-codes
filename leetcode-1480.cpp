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
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        ans.push_back(sum);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}