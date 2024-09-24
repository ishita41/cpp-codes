#include <iostream>
#include <vector>
#include <algorithm> // Not strictly necessary for this solution

using namespace std;

int main() {
  int n;
  cin >> n;

  int a[n]; // Array to store elements (less efficient than vector)
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int k;
  cin >> k;

  int maxlen = 0;
  int count = 0, len = 0;

  // Nested loops for inefficient time complexity: O(n^2)
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (a[j] == 0) count++;
      if (count <= k) {
        len = j - i + 1;
        maxlen = max(maxlen, len);
      }
    }
  }

  cout << maxlen << endl;
  return 0;
}
