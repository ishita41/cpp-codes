#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getpivot(int a[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(a[mid]>=a[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarysearch(int a[],int s,int e,int key){
    int l=0;
    int h=e;
    int mid=s+(e-s)/2;
    while(l<=h){
        if(key==a[mid])
        return mid;
        else if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
        mid=s+(e-s)/2;
    }
    return mid;
}
int search(int a[],int n,int k){
    int Pivot=getpivot(a,n);
    if(k>=a[Pivot] && k<=a[n-1])
    return binarysearch(a,Pivot,n-1,k);
    else
    return binarysearch(a,0,Pivot-1,k);
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
    int ans=search(a,n,k);
    cout<<ans;
}