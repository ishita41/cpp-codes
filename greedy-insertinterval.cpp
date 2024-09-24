#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter the intervals (start and end):" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<int> newEvent(2);
    cout << "Enter the new interval (start and end): ";
    cin >> newEvent[0] >> newEvent[1];

    vector<vector<int>> ans;
    int l = 0;

    // Add all intervals ending before newEvent starts
    while (l < n && intervals[l][1] < newEvent[0]) {
        ans.push_back(intervals[l]);
        l++;
    }

    // Merge all overlapping intervals into newEvent
    while (l < n && intervals[l][0] <= newEvent[1]) {
        newEvent[0] = min(newEvent[0], intervals[l][0]);
        newEvent[1] = max(newEvent[1], intervals[l][1]);
        l++;
    }
    ans.push_back(newEvent);

    // Add all intervals starting after newEvent ends
    while (l < n) {
        ans.push_back(intervals[l]);
        l++;
    }

    // Print the result
    cout << "Merged intervals: ";
    for (const auto& interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
