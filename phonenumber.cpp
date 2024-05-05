#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, string output, int index, vector<string> &ans, string mapping[]) {
    if (index >= digits.length()) {
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapping[number];
    for (int i = 0; i < value.length(); i++) {
        output.push_back(value[i]);
        solve(digits, output, index + 1, ans, mapping);
        output.pop_back();
    }
}

vector<vector<string>> lettercombination(string digits) {
    vector<string> ans;
    vector<vector<string>> res;
    if (digits.length() == 0) return res;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, output, index, ans, mapping);
    res.push_back(ans);
    return res;
}

int main() {
    string input;
    cin >> input;
    vector<vector<string>> result = lettercombination(input);
    for (int i = 0; i < result.size(); ++i) {
        for (int j = 0; j < result[i].size(); ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
