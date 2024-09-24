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

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    sort(a.begin(), a.end(), [&mp](int a, int b) {
        if (mp[a] == mp[b]) {
            return a < b;
        }
        return mp[a] > mp[b];
    });

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
