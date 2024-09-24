#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(a[i]);
    }
    stack<int>temp;
    while(!st.empty()){
        int top=st.top();
        st.pop();
        while(!temp.empty() && temp.top()<top){
            st.push(temp.top());
            temp.pop();
        }
        temp.push(top);
    }
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}