#include<iostream>
#include<stack>
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
    vector<int>nse(n,-1);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(!st.empty() && a[st.top()]>a[i]){
            nse[st.top()]=a[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<nse[i]<<" ";
    }
}