#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    
    vector<bool> prev(k + 1, false);
    if (a[0] <= k) {
        prev[a[0]] = true;
    }

    for (int i = 1; i < n; i++) {
        vector<bool> curr(k + 1, false);
        curr[0] = true;

        for (int target = 1; target <= k; target++) {
            bool nottaken = prev[target];
            bool taken = false;
            if (a[i] <= target) {
                taken = prev[target - a[i]];
            }
            curr[target] = nottaken || taken;
        }
        prev = curr;
    }

    cout << prev[k] << endl;

    return 0;
}
