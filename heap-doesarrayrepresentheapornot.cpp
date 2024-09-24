#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(int a[], int n) {
    for (int i = 0; i <= n / 2 - 1; i++) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if (l < n && a[i] < a[l]) {
            return false;
        }
        if (r < n && a[i] < a[r]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (check(a, n)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
