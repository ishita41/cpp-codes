#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    bool firstRow = false, firstCol = false;

    // Determine if the first row or first column should be zeroed
    for (int i = 0; i < n; ++i) {
        if (matrix[i][0] == 0) {
            firstCol = true;
            break;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (matrix[0][j] == 0) {
            firstRow = true;
            break;
        }
    }

    // Use first row and first column to mark zero rows and columns
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Zero out cells based on marks in the first row and first column
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Zero out the first row if needed
    if (firstRow) {
        for (int j = 0; j < m; ++j) {
            matrix[0][j] = 0;
        }
    }

    // Zero out the first column if needed
    if (firstCol) {
        for (int i = 0; i < n; ++i) {
            matrix[i][0] = 0;
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    // Read the matrix input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call the function to set zeroes
    setZeroes(matrix);

    // Output the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
