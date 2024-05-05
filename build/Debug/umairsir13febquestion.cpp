/*Sachin loves running. He often visits his favourite Jogging Park and runs for very long distances.
On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.
The track on which he runs is an N kilometres long straight path. There are a[i] girls standing within the ith kilometre of this path. A girl will be impressed only if Sachin is running at his maximum speed when he passes by her.
But he can run at his best speed only for a single continuous stretch of K kilometres. Now Sachin wants to know what is the maximum number of girls that he can impress
Input
Input Format
First line contains one integer t - the number of test cases,
The next 2't lines contain the description of the t testcases.
The first line of each testcase contains two integers - n and k.
The second line contains n space separated integers - a[1],a[2]....a[n].
Constraints
1<=t<=103
1<=n,k<=105

Output

For each test case print one line containing an integer, denoting the maximum number of girls Sachin can impress.

Sample Input 1
1
7 2
2 4 8 1 2 1 8

Sample Output 1
12*/


#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the maximum number of girls Sachin can impress for a single test case
int maxGirlsImpressed(int n, int k, vector<int>& girls) {
    int maxSum = 0;
    int currentSum = 0;

    // Calculate initial sum for the first segment of length k
    for (int i = 0; i < k; ++i) {
        currentSum += girls[i];
    }
    maxSum = currentSum;

    // Iterate through the remaining segments
    for (int i = 1; i <= n - k; ++i) {
        // Update current sum by subtracting the first girl in the previous segment
        // and adding the next girl in the current segment
        currentSum = currentSum - girls[i - 1] + girls[i + k - 1];
        maxSum = max(maxSum, currentSum); // Update maxSum if currentSum is greater
    }

    return maxSum;
}

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k; // n: length of path, k: length of continuous stretch
        cin >> n >> k;
        vector<int> girls(n); // Number of girls in each kilometre
        for (int j = 0; j < n; ++j) {
            cin >> girls[j];
        }
        int result = maxGirlsImpressed(n, k, girls);
        cout << result << endl;
    }

    return 0;
}
