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
    int l=0,r=0,jump=0;
    while(r<n-1){
        int far=r;
        for(int i=l;i<=r;i++){
            far=max(far,i+a[i]);
        }
        l=r+1;
        r=far;
        jump++;
    }
    cout<<jump<<endl;
}