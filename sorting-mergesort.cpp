#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(int a[],int low,int mid,int high){
    vector<int>ans;
   int left=low;
   int right=mid+1;
   while(left<=mid && right<=high){
    if(a[left]<=a[right]){
        ans.push_back(a[left]);
        left++;
    }
    else{
        ans.push_back(a[right]);
        right++;
    }
   }
   while(left<=mid){
    ans.push_back(a[left]);
    left++;
   }
    while (right<=high){
        ans.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=ans[i-low];
    }
}
void mergesort(int a[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    merge(a,low,mid,high);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}