#include <iostream>
using namespace std;

int upperbound(int a[], int n, int t) {
    int l = 0;
    int r = n - 1;
    int ans = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] <= t) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t;
    cin >> t;
    int result = upperbound(a, n, t);
    cout << result << endl;
    return 0;
}
