#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
        int x=n%10;
        ans+=x*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<ans;
}