#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(int a[], int k, int n) {
    int l = 0, r = 0;
    int sum = 0;
    int count = 0;
    
    if (k < 0) return 0;

    while (r < n) {
        sum += a[r] % 2;
        while (sum > k) {
            if (a[l] % 2 == 1) {
                sum--;
            }
            l++;
        }
        count += r - l + 1;
        r++;
    }
    
    return count;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << solve(a, k, n) - solve(a, k-1, n);
}
