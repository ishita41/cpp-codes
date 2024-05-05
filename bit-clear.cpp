#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    n&=~(1<<k);
    cout<<n;
}
