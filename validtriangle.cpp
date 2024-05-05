#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int countValidTriangles(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (nums[i] + nums[j] > nums[k])
                    count++;
                else
                    break;
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {4, 6, 3, 7, 9, 5};
    cout << "Number of valid triangles: " << countValidTriangles(nums) << endl;
    return 0;
}
