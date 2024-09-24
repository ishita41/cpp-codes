#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n); // Use vector instead of array for safer memory management
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int l = 0, r = 0, maxlen = 0;
    map<int, int> mp;
    while (r < n) {
        mp[a[r]]++;
        while (mp.size() > k) {
            mp[a[l]]--;
            if (mp[a[l]] == 0) mp.erase(a[l]);
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
        r++;
    }
    
    cout << maxlen << endl;
    return 0;
}
//tc o(2n)
