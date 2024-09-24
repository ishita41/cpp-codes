#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int>mp;
    bool ans=true;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
        mp[b[i]]--;
    }
    for(auto it : mp){
        if(it.second!=0){
            ans=false;
            break;
        }
        ans=true;
    }
    cout<<ans<<endl;
}