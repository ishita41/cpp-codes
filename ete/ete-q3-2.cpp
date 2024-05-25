#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reduceToZero(int target) {
    // Create a vector to store the minimum steps for each number from 0 to target
    vector<int> dp(target + 1, 0);

    for (int i = 1; i <= target; ++i) {
        if (i % 2 == 0) {
            dp[i] = dp[i / 2] + 1; // If i is even, divide by 2
        } else {
            dp[i] = dp[i - 1] + 1; // If i is odd, subtract 1
        }
    }

    return dp[target];
}

int main() {
    int target;
    cout << "Enter the target number: ";
    cin >> target;

    int steps = reduceToZero(target);
    cout << "Number of steps required to reduce " << target << " to 0: " << steps << endl;

    return 0;
}
