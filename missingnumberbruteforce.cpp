#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a[] = {1, 2, 4, 5};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array

    for (int i = 0; i < n; i++) {
        if (a[i] != i) {
            cout << i << endl;
            return 0; // Exit after printing the first non-matching element
        }
    }

    cout << -1 << endl; // If all elements match their indices, print -1
    return 0;
}
