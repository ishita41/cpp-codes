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
    int sum=n*(n+1)/2;
    int asum=0;
    for(int i=0;i<n;i++){
        asum+=a[i];
    }
    cout<<sum-asum;
}