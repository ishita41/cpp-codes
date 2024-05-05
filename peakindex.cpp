#include<iostream>
#include<vector>
using namespace std;
int peak(int a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]>=a[mid+1] && a[mid]>a[mid-1])
        {
            return mid;
        }
         else if(a[mid]>a[mid+1])
           {
               e=mid-1;
           }
           else{
               s=mid+1;
           }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=peak(a,n);
    cout<<ans;
    return 0;
}