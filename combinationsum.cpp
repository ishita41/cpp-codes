#include <iostream>
#include <vector>
using namespace std;

void findsum(int idx, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
    if (idx == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }
    if (idx < arr.size() && arr[idx] <= target) {
        ds.push_back(arr[idx]);
        findsum(idx, target - arr[idx], arr, ans, ds);
        ds.pop_back();
    }
    findsum(idx + 1, target, arr, ans, ds);
}

vector<vector<int>> combinationsum(vector<int>& arr, int target) {
    vector<vector<int>> ans;
    vector<int> ds;
    findsum(0, target, arr, ans, ds);
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int>> result = combinationsum(a, target);

    // Displaying the combinations
    cout << "Combinations that sum up to " << target << " are:\n";
    for (int i = 0; i < result.size(); ++i) {
        cout << "[";
        for (int j = 0; j < result[i].size(); ++j) {
            cout << result[i][j] << " ";
        }
        cout << "]\n";
    }
    return 0;
}
