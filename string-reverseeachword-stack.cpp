#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> st;
    string s;
    getline(cin, s);
    string str = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (!str.empty()) {
                st.push(str);
                str = "";
            }
        } else {
            str += s[i];
        }
    }
    
    // Push the last word if there is any
    if (!str.empty()) {
        st.push(str);
    }
    
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
        if (!st.empty()) {
            ans += " ";
        }
    }
    
    cout << ans << endl;
    return 0;
}
