#include<iostream>
#include<vector>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            cout << p << " ";
        }
    }
}

int main() {
    int n;
    cout << "Enter the limit: ";
    cin >> n;
    sieve(n);
    return 0;
}