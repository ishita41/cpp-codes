#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> array(n, 1);

    // First pass: from left to right
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            array[i] = array[i - 1] + 1;
        }
    }

    // Second pass: from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > a[i + 1]) {
            array[i] = max(array[i], array[i + 1] + 1);
        }
    }

    int ans = 0;
    for (int i : array) {
        ans += i;
    }

    cout << ans << endl;
    return 0;
}
