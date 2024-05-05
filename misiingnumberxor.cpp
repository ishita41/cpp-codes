#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& a, int N) {
    // Calculate the sum of numbers from 1 to N
    int sum = (N * (N + 1)) / 2;
    int csum = 0;
    // Calculate the sum of elements in the array
    for (int i = 0; i < N - 1; i++) {
        csum += a[i];
    }
    // Return the missing number
    return sum - csum;
}

int main() {
    // Test case 1
    vector<int> arr1 = {1, 2, 3, 4, 6};
    int N1 = arr1.size() + 1;
    cout << "Missing number in arr1: " << missingNumber(arr1, N1) << endl;

    // Test case 2
    vector<int> arr2 = {1, 2, 4, 5, 6, 7, 8, 9, 10};
    int N2 = arr2.size() + 1;
    cout << "Missing number in arr2: " << missingNumber(arr2, N2) << endl;

    return 0;
}
