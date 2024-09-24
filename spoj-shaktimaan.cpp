#include <iostream>
using namespace std;
void solve() {
    int N;
    cin >> N;
    if (N % 2 == 0) {
        cout << "Thankyou Shaktiman" << endl;
    } else {
        cout << "Sorry Shaktiman" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}