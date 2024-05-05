#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a>>b;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<a<<" "<<b;
}