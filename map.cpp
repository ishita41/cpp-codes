#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;
int maximumFrequency(std::vector<int> &arr, int n) {
    // Write your code here
    int maxfre = 0;
    int maxans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
        maxfre = max(maxfre, mp[arr[i]]);
    }

    for (int i = 0; i < arr.size(); i++) {
        if (maxfre == mp[arr[i]]) { // Using map iterator to access frequency
            maxans = arr[i]; // Store the element with maximum frequency
            break;
        }
    }
    return maxans;
}

