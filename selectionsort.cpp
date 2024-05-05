#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int idx=i;
        for(int j=i+1;j<n;j++){
            if(a[idx]>a[j]){
                idx=j;
            }
        }
        int temp=a[i];
        a[i]=a[idx];
        a[idx]=temp;

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
} 