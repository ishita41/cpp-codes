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
    vector<int>st;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            st.push_back(a[i]);
        }
        else{
            while(!st.empty() && st.back()>0 && st.back()<-a[i]){
                st.pop_back();
            }
            if(st.empty() || st.back()<0) st.push_back(a[i]);
            else if(st.back()==-a[i]) st.pop_back();
        }
    }
    for(int i=0;i<st.size();i++){
        cout<<st[i]<<" ";
    }
}