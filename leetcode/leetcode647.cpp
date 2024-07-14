#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPalindromicSubstrings = 0;

void expand(string& s, int l, int r) {
    while (l >= 0 && r < s.size() && s[l] == s[r]) {
        countPalindromicSubstrings++;
        l--;
        r++;
    }
}

int solve(const string& s) {
    countPalindromicSubstrings = 0; // Reset the count for each new input string
    if (s.empty()) return 0;
    for (int i = 0; i < s.size(); i++) {
        expand(s, i, i);     // odd length palindromes
        expand(s, i, i + 1); // even length palindromes
    }
    return countPalindromicSubstrings;
}

int main() {
    string s;
    cin >> s;
    cout << solve(s) << endl;
    return 0;
}
