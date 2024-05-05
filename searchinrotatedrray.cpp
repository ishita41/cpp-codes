#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int a[n];
    cout << "Enter the elements of the rotated sorted array: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int k;
    cout << "Enter the element to search for: ";
    cin >> k;

    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        if (a[mid] == k) {
            cout << "Element " << k << " found at index " << mid << endl;
            return 0;
        }

        if (a[s] <= a[mid]) {
            if (a[s] <= k && k <= a[mid]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        } else {
            if (a[mid] <= k && k <= a[e]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
