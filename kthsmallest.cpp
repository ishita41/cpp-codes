#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthsmallest(int a[],int l,int r,int k){
    priority_queue<int>pq;
    for(int i=0;i<k;i++){
        pq.push(a[i]);
    }
    for(int i=k;i<=r;i++){
        if(a[i]<pq.top()){
            pq.pop();
            pq.push(a[i]);
        }
    }
    return pq.top();
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<kthsmallest(a,0,n,k);
}