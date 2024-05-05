// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            ans.push_back(a[i]);
        }
        maxi=max(maxi,a[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}