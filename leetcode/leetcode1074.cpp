#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Calculate prefix sum for each row
        for (int i = 0; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                matrix[i][j] += matrix[i][j - 1];
            }
        }

        int ans = 0;

        // Iterate over all pairs of columns
        for (int s = 0; s < n; ++s) {
            for (int e = s; e < n; ++e) {
                unordered_map<int, int> mp;
                mp[0] = 1; // Default value to handle submatrix sum exactly equal to target
                int sum = 0;

                // Iterate over all rows to find submatrices
                for (int line = 0; line < m; ++line) {
                    // Calculate the sum of elements in the current submatrix
                    if (s > 0) {
                        sum += matrix[line][e] - matrix[line][s - 1];
                    } else {
                        sum += matrix[line][e];
                    }

                    // If (sum - target) exists in the map, add its count to the answer
                    if (mp.find(sum - target) != mp.end()) {
                        ans += mp[sum - target];
                    }

                    // Add the current sum to the map
                    mp[sum]++;
                }
            }
        }

        return ans;
    }
};

int main() {
    int m, n, target;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target sum: ";
    cin >> target;

    Solution sol;
    int result = sol.numSubmatrixSumTarget(matrix, target);
    cout << "Number of submatrices with sum equal to target: " << result << endl;

    return 0;
}
