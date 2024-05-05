#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(i > 0 && a[i] == a[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while(j < k) {
            int sum = a[i] + a[j] + a[k];
            if(sum < 0) {
                j++;
            }
            else if(sum > 0) {
                k--;
            }
            else {
                cout << a[i] << " " << a[j] << " " << a[k] << endl;
                while(j < k && a[j] == a[j + 1]) j++; // Skip duplicate elements for j
                while(j < k && a[k] == a[k - 1]) k--; // Skip duplicate elements for k
                j++; // Move to the next different value for j
                k--; // Move to the next different value for k
            }
        }
    }
    return 0;
}
