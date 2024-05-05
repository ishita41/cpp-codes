#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Create a 2D vector
    vector<vector<int>> a(n, vector<int>(m));

    // Input matrix elements
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose the matrix
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < m; j++) {
            swap(a[i][j], a[j][i]);
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++) {
        reverse(a[i].begin(), a[i].end());
    }

    // Output the rotated matrix
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
