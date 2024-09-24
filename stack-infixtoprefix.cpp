#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

bool isoperator(char c){
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int priority(char c){
    if(c == '^') return 3;
    else if(c == '/' || c == '*') return 2;
    else if(c == '-' || c == '+') return 1;
    return -1;
}

string infixtopostfix(string s){
    string ans = "";
    stack<char> st;
    s = '(' + s + ')';

    for(int i = 0; i < s.size(); i++){
        if(isalpha(s[i]) || isdigit(s[i])) {
            ans += s[i];
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            while (st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else if(isoperator(s[i])){
            while(!st.empty() && priority(s[i]) <= priority(st.top())){
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    return ans;
}

string infixtoprefix(string s){
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            s[i] = ')';
        }
        else if(s[i] == ')'){
            s[i] = '(';
        }
    }
    string res = infixtopostfix(s);
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    string s;
    cin >> s;
    cout << infixtoprefix(s);
    return 0;
}