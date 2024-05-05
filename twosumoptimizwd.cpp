#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        
        for(int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - num;
            
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            mp[num] = i;
        }
        
        return {-1, -1};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    cout << "Elements: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    
    return 0;
}
