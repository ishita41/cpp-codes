// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int firstoccurance(int a[],int n,int t){
    int ans=-1;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==t){
            ans=mid;
            e=mid-1;
        }
        else if(t>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int lastoccurance(int a[],int n,int t){
       int ans=-1;
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==t){
            ans=mid;
            s=s+1;
        }
         else if(t>a[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int t;
   cin>>t;
   cout<<firstoccurance(a,n,t)<<endl;
   cout<<lastoccurance(a,n,t)<<endl;
}