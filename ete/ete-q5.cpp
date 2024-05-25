#include <iostream>
#include <algorithm> // for std::swap
using namespace std;

void printArray(const int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[idx]) {
                idx = j;
            }
        }
        if (idx != i) {
            swap(a[idx], a[i]);
            printArray(a, n);
        }
    }

    return 0;
}
