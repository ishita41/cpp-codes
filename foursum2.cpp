#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size(); //size of the array
    set<vector<int>> st;

    //checking all possible quadruplets:
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            set<int> set;
            for (int k = j + 1; k < n; k++) {
                long long sum = nums[i] + nums[j] + nums[k];
                long long fourth = target - sum;
                if (set.find(fourth) != set.end()) {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                set.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    vector<vector<int>> result = fourSum(nums, target);

    // Printing the result
    for (const auto& quadruplet : result) {
        for (int num : quadruplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
