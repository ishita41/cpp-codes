// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
    if(b!=0)
        return gcd(b,a%b);
    return a;
}
int main() {
    int a,b;
    cin>>a>>b;
  cout<<gcd(a,b);
}