#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&a,int k,int n){
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[(i+k)%n]=a[i];
    }
    a=ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    rotate(a,k,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
}
}