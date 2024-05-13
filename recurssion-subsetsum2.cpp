#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int idx, int a[], vector<int>& curr, vector<vector<int>>& subsets, int n) {
    //if(!curr.empty())  to avoid empty
    subsets.push_back(curr); // Include the current subset
    for (int i = idx; i < n; i++) {
        if (i != idx && a[i] == a[i - 1]) continue;
        curr.push_back(a[i]);
        solve(i + 1, a, curr, subsets, n);  // Use i+1 instead of idx+1
        curr.pop_back();
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<int> curr;
    vector<vector<int>> subsets;
    solve(0, a, curr, subsets, n);
    for (int i = 0; i < subsets.size(); i++) {
        for (int j = 0; j < subsets[i].size(); j++) {
            cout << subsets[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
