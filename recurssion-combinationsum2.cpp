#include <iostream>
#include <vector>
using namespace std;
class Solution {
public: 
    void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds) {
        if(ind == arr.size()) {
            if(target == 0) {
                ans.push_back(ds); 
            }
            return; 
        }
        // pick up the element 
        if(arr[ind] <= target) {
            ds.push_back(arr[ind]); 
            findCombination(ind, target - arr[ind], arr, ans, ds); 
            ds.pop_back(); 
        }
        findCombination(ind+1, target, arr, ans, ds); 
    }
};

int main() {
    Solution solution;
    
    // Taking user input for array elements
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> candidates(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; ++i) {
        cin >> candidates[i];
    }
    
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    
    vector<vector<int>> ans; 
    vector<int> ds; 
    solution.findCombination(0, target, candidates, ans, ds); 
        
    // Printing the answer using for loops
    for(int i = 0; i < ans.size(); ++i) {
        for(int j = 0; j < ans[i].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
