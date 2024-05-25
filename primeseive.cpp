#include <iostream>
#include <vector>
using namespace std;

void sieve(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) { // Increment j by i
                prime[j] = false; // Correctly mark non-prime numbers
            }
        }
    }
    for (int i = 2; i <= n; i++) { // Ensure to include n in the loop
        if (prime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    sieve(n);
    return 0;
}
