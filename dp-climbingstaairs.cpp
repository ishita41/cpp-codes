#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<=1) return n;
    int prev1=1;
    int prev2=1;
    for(int i=2;i<=n;i++){
        int curr=prev1+prev2;
        prev1=prev2;
        prev2=curr;
    }
    cout<<prev2<<endl;
}