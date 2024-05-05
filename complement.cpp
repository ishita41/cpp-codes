#include<iostream>
using namespace std;

int bitwiseComplement(int n) {
    int m = n;
    int mask = 0;
    if (n == 0) return 1;
    while (m != 0) {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    cout << ans;
    return 0;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    bitwiseComplement(num);
    return 0;
}
