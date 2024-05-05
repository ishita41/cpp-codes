#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // binary_search returns a boolean indicating whether the element exists or not
    cout << binary_search(v.begin(), v.end(), 6) << endl;

    // lower_bound returns an iterator pointing to the first element not less than the given value
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // upper_bound returns an iterator pointing to the first element greater than the given value
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // max returns the maximum of two values
    cout << max(10, 20) << endl;

    // Swap two integers
    int a = 10, b = 20;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // Reverse a string
    string s = "abc";
    reverse(s.begin(), s.end());
    cout << s << endl;

    // Rotate the vector
    rotate(v.begin() + 1, v.end(), v.end());
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
