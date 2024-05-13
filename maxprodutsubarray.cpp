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
    int ans=0;
    int left_product=1;
    int right_product=1;
    if(n==1) ans=a[0];
    for(int i=0;i<n;i++){
        left_product*=a[i];
        ans=max(ans,left_product);
        if(left_product==0) left_product=1; 
    }
    for(int i=n-1;i>=0;i--){
        right_product*=a[i];
        ans=max(ans,right_product);
        if(right_product==0) right_product=1;
    }
    cout<<ans<<endl;
}