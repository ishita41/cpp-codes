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
    vector<int>left(n,1);
    vector<int>right(n,1);
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1]){
            left[i]=left[i-1]+1;
        }
    }
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1]){
            right[i]=right[i+1]+1;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=max(left[i],right[i]);
    }
    cout<<ans<<endl;
}