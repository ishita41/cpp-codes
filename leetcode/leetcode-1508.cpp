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
    int l,r;
    cin>>l>>r;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            ans.push_back(sum);
        }
    }
    sort(ans.begin(),ans.end());
    int res=0;
    for(int i=l-1;i<r;i++){
        res=res+ans[i];
    }
    cout<<res;
}