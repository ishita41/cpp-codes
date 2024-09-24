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
    int k;
    cin>>k;
    int len=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int sum=0;
            for(int l=0;l<=j;l++){
                sum+=a[l];
            }
            if(sum==k) len=max(len,j-i+1);
        }
    }
    cout<<len<<endl;
}