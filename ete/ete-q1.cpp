#include <iostream>
#include <map>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }

    char max_freq_char = s[0];
    int max_freq = 1;

    for (auto it = mp.begin(); it != mp.end(); it++) {
        if (it->second > max_freq) {
            max_freq = it->second;
            max_freq_char = it->first;
        }
    }

    cout << max_freq_char << endl;

    return 0;
}
