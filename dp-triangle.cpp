#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        a[i].resize(i + 1);
        for (int j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> front(n, 0);
    vector<int> curr(n, 0);
    for (int j = 0; j < n; j++) {
        front[j] = a[n - 1][j];
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            int up = a[i][j] + front[j];
            int r = a[i][j] + front[j + 1];
            curr[j] = min(up, r);
        }
        front = curr;
    }

    cout << front[0];
    return 0;
}
