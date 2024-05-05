#include<iostream>
#include<vector>
using namespace std;

int trap(int a[], int n) {
    int s = 0;
    int e = n - 1;
    int maxleft = 0, maxright = 0, res = 0;
    while (s <= e) {
        if (a[s] <= a[e]) {
            if (a[s] >= maxleft) maxleft = a[s];
            else res += maxleft - a[s];
            s++;
        }
        else {
            if (a[e] >= maxright) maxright = a[e];
            else res += maxright - a[e];
            e--;
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << trap(a, n) << endl; // Call the trap function and output the result
    return 0;
}
