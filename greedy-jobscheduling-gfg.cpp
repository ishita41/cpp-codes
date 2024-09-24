#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job {
    int id;
    int dead;
    int profit;
};

bool static cmp(Job a, Job b) {
    return a.profit > b.profit;
}

void jobscheduling(Job arr[], int n) {
    sort(arr, arr + n, cmp);
    
    int profit = 0, jobs = 0, maxDeadline = 0;
    
    // Find the maximum deadline
    for (int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, arr[i].dead);
    }
    
    // Create a hash array to keep track of free time slots
    vector<int> hash(maxDeadline + 1, -1);
    
    // Iterate through all given jobs
    for (int i = 0; i < n; i++) {
        // Find a free slot for this job (starting from the last possible slot)
        for (int j = arr[i].dead; j > 0; j--) {
            if (hash[j] == -1) {
                hash[j] = arr[i].id; // Assign job id to the slot
                jobs++;
                profit += arr[i].profit; // Correctly update profit
                break;
            }
        }
    }
    
    cout << "Total Jobs: " << jobs << ", Total Profit: " << profit << endl;
}

int main() {
    int n;
    cin >> n;
    
    Job arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].id >> arr[i].dead >> arr[i].profit;
    }
    
    jobscheduling(arr, n);
    
    return 0;
}
