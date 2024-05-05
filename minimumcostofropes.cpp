
#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int mincost(int a[], int n) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        pq.push(a[i]);
    }
    int cost = 0;
    while (pq.size() > 1) {
        int a = pq.top(); pq.pop();
        int b = pq.top(); pq.pop();
        int sum = a + b;
        cost += sum;
        pq.push(sum);
    }
    return cost;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int result = mincost(a, n);
    cout << "Minimum cost to merge all elements into one: " << result << endl;

    return 0;
}

