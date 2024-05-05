#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
bool ans(string s)
{
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else if (!st.empty() && s[i] == ')' && st.top() == '(')
            st.pop();
        else if (!st.empty() && s[i] == ']' && st.top() == '[')
            st.pop();
        else if (!st.empty() && s[i] == '}' && st.top() == '{')
            st.pop();
        else 
            return false;
    }
    return st.empty();
}
int main(){
    string s;
    cin>>s;
    cout<<ans(s);
}