#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0;
        for(int i = 0; i < k; i++) lsum += cardPoints[i];
        int sum = lsum;
        int j = cardPoints.size() - 1;
        int rsum = 0;
        for(int i = k - 1; i >= 0; i--) {
            lsum -= cardPoints[i];
            rsum += cardPoints[j];
            j--;
            sum = max(sum, lsum + rsum);
        }
        return sum;
    }
};

int main() {
    Solution sol;
    int n, k;
    cout << "Enter the number of cards: ";
    cin >> n;
    vector<int> cardPoints(n);
    cout << "Enter the card points: ";
    for(int i = 0; i < n; i++) {
        cin >> cardPoints[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    int result = sol.maxScore(cardPoints, k);
    cout << "Maximum score: " << result << endl;

    return 0;
}
``
