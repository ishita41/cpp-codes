#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>nge(n,-1);
    stack<int>st;
    for(int i=2*n-1;i>=0;i--){
        int idx=i%n;
        while(!st.empty() && a[st.top()]<=a[idx]){
            st.pop();
        }
        if(!st.empty()){
            nge[idx]=a[st.top()];
        }
        st.push(idx);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
}