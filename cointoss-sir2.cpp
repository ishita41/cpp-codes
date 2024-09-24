#include <iostream>
#include <string>
using namespace std;

int ct(int n, string ans) {
    if (n == 0) {
        cout << ans << endl;
        return 1;  // Return 1 for each valid subsequence
    } else {
        int count = 0;
        // Check if the last character of ans is not 'H'
        if (ans.empty() || ans.back() != 'H') {
            count += ct(n - 1, ans + 'H');  // Add 'H' to the subsequence
        }
        count += ct(n - 1, ans + 'T');  // Add 'T' to the subsequence
        return count;  // Return the total count of subsequences
    }
}

int main() {
    int n = 3;  // Example value for n
    int total_count = ct(n, "");  // Start with an empty string
    cout << "Total subsequences: " << total_count << endl;
    return 0;
}
