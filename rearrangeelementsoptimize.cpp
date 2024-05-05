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
    vector<int>ans(n);
    int pos=0,neg=1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            ans[neg]=a[i];
            neg+=2;
        }
        else{
            ans[pos]=a[i];
            pos+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}