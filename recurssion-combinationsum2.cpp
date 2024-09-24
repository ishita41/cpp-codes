#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findsum(int idx, int t, int csum, int a[], vector<vector<int>>& ans, vector<int>& ds, int n) {
    if (csum == t) {
        ans.push_back(ds);
        return;
    }
    for (int i = idx; i < n; i++) {
        if (i > idx && a[i] == a[i - 1]) continue;
        ds.push_back(a[i]);
        findsum(i + 1, t, csum + a[i], a, ans, ds, n);
        ds.pop_back();
    }
}

void printans(vector<vector<int>> ans) {
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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
    int t;
    cin >> t;
    vector<vector<int>> ans;
    vector<int> ds;
    findsum(0, t, 0, a, ans, ds, n);
    printans(ans);
    return 0;
}