#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<string>st;
    string ans="";
    for(char c : s){
        if(c=='('){
            st.push(ans);
            ans.clear();
     }
     else if(c==')'){
        string rev=ans;
        reverse(rev.begin(),rev.end());
        ans=st.top()+rev;
        st.pop();
     }
     else{
        ans+=c;
     }
    }
    cout<<ans<<endl;
}