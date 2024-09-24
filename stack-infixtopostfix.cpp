#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '/' || c == '*')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}
void infixtopostfix(string s){
    stack<char>st;
    string ans;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
            ans+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(s[i])<=prec(st.top())){
                ans+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    cout<<ans<<endl;
}
int main(){
    string s;
    cin>>s;
    infixtopostfix(s);
}