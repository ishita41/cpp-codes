#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    vector<int>expected=a;
    sort(expected.begin(), expected.end());
    for(int i=0;i<n;i++){
        if(a[i]!=expected[i]){
            ans++;
        }
    }
    cout<<ans<<endl;
}