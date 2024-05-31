#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int func(int n){
    int sum=0;
    while(n){
        int r=n%10;
        sum+=r;
        n/=10;
    }
    if(sum<10) return sum;
    else return func(sum);
}
int main(){
    int n;
    cin>>n;
    cout<<func(n)<<endl;
}