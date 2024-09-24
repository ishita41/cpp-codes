#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;


bool check(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}


string infix(string s) {
    stack<string> st;
    for (int i = 0; i < s.size(); i++) {
        
        if (check(s[i])) {
            string op(1, s[i]);
            st.push(op);
        }
        
        else {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            st.push("(" + op2 + s[i] + op1 + ")");
        }
    }
    return st.top();
}

int main() {
    string s;
    cout << "Enter a postfix expression: ";
    cin >> s;
    cout << "Infix expression: " << infix(s) << endl;
    return 0;
}
