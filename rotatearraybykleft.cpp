// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
   int n;
   cin>>n;
   int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
   for(int j=0;j<k;j++){
       int temp=a[0];
       for(int i=1;i<n;i++){
           a[i-1]=a[i];
       }
       a[n-1]=temp;
   }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}