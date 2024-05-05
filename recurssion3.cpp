#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sump(int n, int sum) {
    if (n == 0)
        cout << sum;
    else
        sump(n - 1, sum + n);
}

int main() {
    int n;
    cin >> n;
    sump(n, 0); // Initialize sum as 0
    return 0;
}
