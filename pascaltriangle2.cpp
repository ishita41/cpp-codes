// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int ncr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int sol(int n){
    for(int i=1;i<=n;i++){
        cout<<ncr(n-1,i-1)<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    sol(n);
    return 0;
}