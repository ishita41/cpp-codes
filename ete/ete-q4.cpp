#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void seive(int n){
    vector<int>prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j++){
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    seive(n);
}