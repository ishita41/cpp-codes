#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int diff,maxi;
    for(int i=1;i<n;i++){
        diff=a[i]-a[i-1];
        maxi=max(maxi,diff);
    }
    cout<<maxi;
}