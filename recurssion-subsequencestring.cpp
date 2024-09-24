#include<iostream>
#include<string>
using namespace std;

void print(string s, string ans, int idx) {
    if(idx == s.length()) {
        cout << ans << endl;
        return;
    }
    print(s, ans + s[idx], idx + 1);
    print(s, ans, idx + 1);
}

int main() {
    string s;
    cin >> s;
    string ans = "";
    print(s, ans, 0);
    return 0;
}
