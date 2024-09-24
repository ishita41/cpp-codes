#include <iostream>
#include <vector>

using namespace std;

vector<string> al;

void findsubs(string s, string ans) {
    if (s.length() == 0) {
        al.push_back(ans);
        return;
    }
    findsubs(s.substr(1), ans + s[0]);
    findsubs(s.substr(1), ans);
}

int main() {
    string s = "abc";
    findsubs(s, "");
    for (const auto& str : al) {
        cout << str << " ";
    }
    return 0;
}
