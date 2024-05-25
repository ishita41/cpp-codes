#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
      if(n==0) return 0;
      int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  
    int j=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            a[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++){
        cout<<a[i]<<" ";
    }
}