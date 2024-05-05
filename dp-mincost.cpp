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
    int prev1=a[0];
    int prev2=a[1];
    for(int i=2;i<n;i++){
        int curr=min(prev1,prev2)+a[i];
        prev1=prev2;
        prev2=curr;
    }
    cout<<min(prev1,prev2);
}