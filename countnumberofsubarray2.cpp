#include <iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t,xr;
    cin>>t;
    int cnt=0;
   for(int i=0;i<n;i++){
       xr=0;
       for(int j=i;j<n;j++){
           xr=xr^a[j];
           if(xr== t) cnt++;
       }
   }
   cout<<cnt;
    return 0;
}