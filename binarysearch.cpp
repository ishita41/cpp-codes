#include <iostream>
#include <vector>
using namespace std;

int binarysearch(int a[], int t, int n) {
    int s = 0, e = n;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (t == a[mid])
            return mid;
        else if (a[mid] > t)
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1; // Return -1 if element is not found
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
    int ans = binarysearch(a, t, n);
    cout << "Index of " << t << " in the array: " << ans << endl;
    return 0;
}
