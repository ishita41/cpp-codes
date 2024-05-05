#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev1=0;
    int prev2=1;
    int prev3=1;
    for(int i=3;i<=n;i++){
        int curr=prev1+prev2+prev3;
        prev1=prev2;
        prev2=prev3;
        prev3=curr;
    }
    cout<<prev3;
}