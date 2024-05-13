#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reversearray(int a[], int n, int i) {
    if (i == n) return;
    reversearray(a, n, i + 1);
    cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    reversearray(a, n, 0);
    return 0;
}
