#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthlargest(int a[], int k, int l, int r) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++) {
        pq.push(a[i]);
    }
    for (int i = k; i < r; i++) {
        if (a[i] > pq.top()) {
            pq.pop();
            pq.push(a[i]);
        }
    }
    return pq.top();
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    cout << kthlargest(a, k, 0, n) << endl;
    return 0;
}
