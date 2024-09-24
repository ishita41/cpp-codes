#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void heapify(int a[],int i,int n){
    int  left=2*i+1;
    int right=2*i+2;
    int largest=i;
    if(left<n && a[left]>a[i]){
        largest=left;
    }
    if(right<n && a[right]>a[largest]){
        largest=right;
    }
    if(largest!=i){
    swap(a[i],a[largest]);
    heapify(a,largest,n);
    }
}
void convert(int a[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        heapify(a,i,n);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    convert(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}