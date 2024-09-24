#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]) count++;
    }
    if(a[n-1]>a[0]) count++;
    if(count<=1) cout<<"yes";
    else cout<<"no";
}