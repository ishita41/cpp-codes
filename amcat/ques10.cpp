#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f=1;
    int s=1;
    int ans=0;
    cout<<f<<" "<<s;
    for(int i=2;i<n;i++){
        ans=f+s;
        cout<<" "<<ans<<" ";
        f=s;
        s=ans;
    }
}