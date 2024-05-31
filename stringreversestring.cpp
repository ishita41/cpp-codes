#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    for (int i = 0; i < s.size(); i += 2 * k) {
        int e = min(i + k, (int)s.size());
        reverse(s.begin() + i, s.begin() + e);
    }
    
    cout << s << endl;
    return 0;
}
