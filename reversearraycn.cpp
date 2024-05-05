#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int i=m+1;
    int j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}