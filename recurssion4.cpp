#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int add(int n){
    if(n==0) return 0;
    return n+add(n-1);
  
}
int main(){
    int n;
    cin>>n;
    cout<<add(n);
}