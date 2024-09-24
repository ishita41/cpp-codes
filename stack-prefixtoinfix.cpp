#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

bool check(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

string prefixToInfix(string s) {
    stack<string> st;
    
    // Traverse the string from right to left
    for (int i = s.size() - 1; i >= 0; i--) {
        
        // If the character is an operand, push it to the stack
        if (check(s[i])) {
            string op(1, s[i]);
            st.push(op);
        }
        
        // If the character is an operator
        else {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            st.push("(" + op1 + s[i] + op2 + ")");
        }
    }
    return st.top();
}

int main() {
    string s;
    cout << "Enter a prefix expression: ";
    cin >> s;
    cout << "Infix expression: " << prefixToInfix(s) << endl;
    return 0;
}
