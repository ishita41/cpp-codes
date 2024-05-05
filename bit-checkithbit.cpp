#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    if (n & (1 << (k-1))) {
        cout << "yes";
    } else {
        cout << "no";
    }
    return 0;
}
