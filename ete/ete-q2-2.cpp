#include<iostream>
#include<vector>
#include<algorithm>
bool sol(int n){
    if(n<=0) return false;
    if(n<=6) return true;
    while(n%2==0) n/=2;
    while(n%3==0) n/=3;
    while(n%5==0) n/=5;
    return (n==1);
}
using namespace std;
int main(){
    int n;
    cin>>n;
   if(sol) cout<<"true";
}