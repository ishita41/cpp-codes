#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void findSum(int idx, int target, int csum, vector<int>& candidates, vector<vector<int>>& ans, vector<int>& ds) {
        if (idx == candidates.size()) {
            if (csum == target) {
                ans.push_back(ds);
            }
            return;
        }

        // Include the current element in the combination
        if (csum + candidates[idx] <= target) {
            ds.push_back(candidates[idx]);
            findSum(idx, target, csum + candidates[idx], candidates, ans, ds);
            ds.pop_back();
        }

        // Skip the current element and move to the next
        findSum(idx + 1, target, csum, candidates, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findSum(0, target, 0, candidates, ans, ds);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> candidates;
    int target;
    
    // Take input for the candidates vector
    int numCandidates;
    cout << "Enter the number of candidates: ";
    cin >> numCandidates;
    cout << "Enter " << numCandidates << " candidate values: ";
    for (int i = 0; i < numCandidates; ++i) {
        int val;
        cin >> val;
        candidates.push_back(val);
    }

    // Take input for the target value
    cout << "Enter the target value: ";
    cin >> target;

    vector<vector<int>> result = solution.combinationSum(candidates, target);

    // Print the result
    cout << "Combinations that sum up to " << target << ":" << endl;
    for (const auto& vec : result) {
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
