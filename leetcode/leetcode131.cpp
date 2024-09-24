#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool palindrome(string s, int start, int end) {
    while (start <= end) {
        if (s[start++] != s[end--]) {
            return false;
        }
    }
    return true;
}
void palindromestring(string s, int idx, vector<string>& ds, vector<vector<string>>& ans) {
    if (idx == s.size()) {
        ans.push_back(ds);
        return;
    }
    for (int i = idx; i < s.size(); i++) {
        if (palindrome(s, idx, i)) {
            ds.push_back(s.substr(idx, i - idx + 1));
            palindromestring(s, i + 1, ds, ans);
            ds.pop_back();
        }
    }
}
int main() {
    string s;
    cin >> s;
    vector<string> ds;
    vector<vector<string>> ans;
    palindromestring(s, 0, ds, ans);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}