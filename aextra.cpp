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
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1) reverse(a,a+n);
    for(int i=n-1;i>=0;i--){
        if(a[i]>a[idx]){
            swap(a[i],a[idx]);
            break;
        }
    }
    reverse(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}