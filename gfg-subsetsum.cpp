#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> subsetSums(int idx, int a[], int n, int csum, vector<int> &ans) {
    if (idx == n) {
        ans.push_back(csum);
        return ans;
    }
    subsetSums(idx + 1, a, n, csum + a[idx], ans);
    subsetSums(idx + 1, a, n, csum, ans);
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> ans;
    vector<int> res = subsetSums(0, a, n, 0, ans);
    sort(res.begin(),res.end());
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
