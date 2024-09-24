#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(int idx, int a[], vector<int>& ds, vector<vector<int>>& ans, int n) {
    ans.push_back(ds); // add current subset to answer
    for (int i = idx; i < n; i++) {
        if (i > idx && a[i] == a[i - 1]) continue;
        ds.push_back(a[i]);
        solve(i + 1, a, ds, ans, n);
        ds.pop_back();
    }
}

void printff(vector<vector<int>>& ans) {
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
    vector<int> ds;
    vector<vector<int>> ans;
    solve(0, a, ds, ans, n);
    printff(ans);
    return 0;
}