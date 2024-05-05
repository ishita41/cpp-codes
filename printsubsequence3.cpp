#include <iostream>
#include <vector>
using namespace std;

bool printsum(int idx, vector<int>& ds, int currentSum, int sum, int a[], int n) {
    if (idx == n) {
        if (currentSum == sum) {
            for (auto it : ds) {
                cout << it << " ";
            }
            cout << endl;
            return true; // Subsequence found
        }
        return false; // Subsequence not found
    }
    
    // Include current element in the subset  
    ds.push_back(a[idx]);
    // Recur with the next index and updated currentSum
    // element included
    if (printsum(idx + 1, ds, currentSum + a[idx], sum, a, n)) {
        return true; // Subsequence found
    }
    // Exclude current element from the subset
    ds.pop_back();
    //element not included
    // Recur with the next index and the same currentSum
    if (printsum(idx + 1, ds, currentSum, sum, a, n)) {
        return true; // Subsequence found
    }
    return false; // Subsequence not found
}

int main() {
    int n = 3;
    int a[3] = {1, 2, 1};
    int targetSum = 2;
    vector<int> ds;
    if (!printsum(0, ds, 0, targetSum, a, n)) {
        cout << "No subsequence found with sum equal to " << targetSum << endl;
    }
    return 0;
}
