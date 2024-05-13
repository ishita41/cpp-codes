#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countSubsets(int idx, vector<int>& a, int sum, int currentSum, int n) {
    if (idx == n) {
        if (currentSum == sum) {
            return 1;
        }
        return 0;
    }
   currentSum+=a[idx];
   int l=countSubsets(idx+1,a,sum,currentSum,n);
    int r=countSubsets(idx+1,a,sum,currentSum,n);
    return l+r;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int targetSum;
    cin >> targetSum;
    cout << countSubsets(0, a, targetSum, 0, n);
    return 0;
}
