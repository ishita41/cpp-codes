// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(int n){
    if(n==11)
    return ;
    cout<<n;
    print(n+1);
}
int main() {
    int n;
    cin>>n;
    print(n);
}