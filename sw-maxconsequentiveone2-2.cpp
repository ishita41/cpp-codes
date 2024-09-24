#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n); // Using vector instead of array for better practice in C++
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;

    int maxlen = 0, l = 0, r = 0, count = 0;

    while (r < n) {
        if (a[r] == 0) {
            count++;
        }
        
        while (count > k) {
            if (a[l] == 0) {
                count--;
            }
            l++;
        }

        maxlen = max(maxlen, r - l + 1);
        r++;
    }

    cout << maxlen << endl;
    return 0;
}
// o(2n)