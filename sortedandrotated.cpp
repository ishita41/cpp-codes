#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int>&a,int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
        }
    }
    if(a[n-1]>a[0])
    count++;
    return count<=1;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
cout<<check(a,n);
}