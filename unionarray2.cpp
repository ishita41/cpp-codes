#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        } else if (b[j] < a[i]) {
            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        } else {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }
        j++;
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
