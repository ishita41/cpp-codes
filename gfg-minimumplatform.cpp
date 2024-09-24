#include <iostream>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }

    std::sort(a, a + n);
    std::sort(b, b + m);

    int count = 0, maxCount = 0;
    int l = 0, r = 0;

    while (l < n && r < m) {
        if (a[l] < b[r]) {
            count++;
            l++;
        } else {
            count--;
            r++;
        }
        maxCount = std::max(count, maxCount);
    }

    std::cout << maxCount << std::endl;
    return 0;
}