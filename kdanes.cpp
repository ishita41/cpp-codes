#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=a[0];
    int csum=0;
    for(int i=0;i<n;i++){
        csum=csum+a[i];
        if(csum>sum)
        sum=csum;
        else if(csum<0)
        csum=0;
    }
    cout<<sum;
}