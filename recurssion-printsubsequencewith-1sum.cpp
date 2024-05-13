#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool print(int idx, vector<int>& a, vector<int>& ans, int sum, int csum, int n) {
    if (idx == n) {
        if (csum == sum) {
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i] << " ";
            }
            return true;  // Return true if a subset with the target sum is found
        }
        return false;  // Return false otherwise
    }
    ans.push_back(a[idx]);
    bool found = print(idx + 1, a, ans, sum, csum + a[idx], n);  // Update csum properly
    ans.pop_back();
    if (found) return true;  // If found in the first branch, return true
    return print(idx + 1, a, ans, sum, csum, n);  // Otherwise, continue searching
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t;
    cin >> t;
    vector<int> ans;
    bool found = print(0, a, ans, t, 0, n);  // Call print and store the result

    if (!found) {
        cout << "No subset with the given sum exists." << endl;
    }

    return 0;
}
