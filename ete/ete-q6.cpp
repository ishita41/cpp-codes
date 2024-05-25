#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev1=1;
    int prev2=2;
    int prev3=4;
    for(int i=4;i<=n;i++){
        int ans=prev1+prev2+prev3;
        prev1=prev2;
        prev2=prev3;
        prev3=ans;
    }
    cout<<prev3;
}