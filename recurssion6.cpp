#include<iostream>
#include<vector>
using namespace std;
void reverse(int a[],int s,int e){
    if(s>=e) return;
    swap(a[s],a[e]);
    reverse(a,s+1,e-1);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    reverse(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}