// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos=0,neg=1;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            ans.push_back(a[i]);
            neg+=2;
        }
        else{
            ans.push_back(a[i]);
            pos+=2;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i];
    }

    return 0;
}