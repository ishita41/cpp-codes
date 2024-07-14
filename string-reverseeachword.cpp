#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void reverse(string& s, int left, int right) {
    while (left < right) {
        swap(s[left++], s[right--]);
    }
}
int main() {
    string s;
    getline(cin, s);
    int l = 0, r = 0;
    while (r < s.size()) {
        if (s[r] == ' ') {
            reverse(s, l, r - 1);
            l = r + 1;
        }
        r++;
    }
    reverse(s, l, r - 1);
    cout << s << endl;
    return 0;
}
