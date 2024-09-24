#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;

    int l = 0, r = 0, maxlen = 0, maxfreq = 0;
    int hash[26] = {0};

    while (r < s.size()) {
        hash[s[r] - 'A']++;
        maxfreq = max(maxfreq, hash[s[r] - 'A']);

        if ((r - l + 1) - maxfreq > k) {
            hash[s[l] - 'A']--;
            l++;
        }

        maxlen = max(maxlen, r - l + 1);
        r++;
    }

    cout << maxlen << endl;

    return 0;
}

