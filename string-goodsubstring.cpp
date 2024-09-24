/*A part of a String i.e Subtring is considered Good if and only if it contains all the distinct characters.
Given a string s, find the length of the longest good substring of s.

Input Format
A string of English letters, digits, symbols.

Constraints
0 <= s.length <= 105

Output Format
For each test case in a new line print the length of the longest good substring.

Sample Input
abcabcbb
Sample Output
3
Explanation
The answer is "abc", with the length of 3.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int ans = 0;
    set<char> st;
    int start = 0;
    
    for (int end = 0; end < s.size(); end++) {
        while (st.find(s[end]) != st.end()) {
            st.erase(s[start]);
            start++;
        }
        st.insert(s[end]);
        ans = max(ans, static_cast<int>(st.size()));
    }
    
    cout << ans << endl;
    return 0;
}
