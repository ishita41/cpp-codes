#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;

    int count = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp.clear();
        for (int j = i; j < n; j++) {
            mp[a[j]]++;
            if (mp.size() == k) count++;
            else if (mp.size() > k) break;
        }
    }
    cout << count << endl;

    return 0;
}