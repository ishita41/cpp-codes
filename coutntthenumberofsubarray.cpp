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
    int t;
    cin>>t;
    int xr=0,cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                xr=xr^a[k];
            }
            if(xr==t){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}