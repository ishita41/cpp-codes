#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int profit=0;
    int buy=a[0];
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            profit+=a[i]-a[i-1];
        }
    }
    cout<<profit;
}