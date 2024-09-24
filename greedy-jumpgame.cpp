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
    int maxi=0;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(i>maxi) flag=false;
        maxi=max(maxi,i+a[i]);
    }
    flag =true;
    if(flag) cout<<"possible"<<endl;
    else cout<<"not possible"<<endl;
}