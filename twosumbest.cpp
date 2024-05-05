#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); // Sort the input vector 'nums' in non-decreasing order
        
        int i = 0, j = nums.size() - 1; // Initialize two pointers 'i' and 'j', pointing to the start and end of the sorted array
        
        while (i < j) { // Continue iterating until 'i' is less than 'j'
            int sum = nums[i] + nums[j]; // Calculate the sum of elements at indices 'i' and 'j'
            
            if (sum == target) // If the sum is equal to the target
                return {i, j}; // Return a vector containing the indices of the two numbers
            
            else if (sum > target) // If the sum is greater than the target
                j--; // Move the 'j' pointer to the left to decrease the sum
            
            else // If the sum is less than the target
                i++; // Move the 'i' pointer to the right to increase the sum
        }
        
        return {-1, -1}; // If no such pair is found, return {-1, -1}
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution solution;
    vector<int> indices = solution.twoSum(nums, target);
    
    if (indices[0] != -1 && indices[1] != -1) {
        cout << "Indices of the two numbers that sum up to " << target << ": " << indices[0] << " and " << indices[1] << endl;
        cout << "The two numbers are: " << nums[indices[0]] << " and " << nums[indices[1]] << endl;
    } else {
        cout << "No such pair found." << endl;
    }
    
    return 0;
}
