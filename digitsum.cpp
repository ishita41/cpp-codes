#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0) {
        int x = n % 10;
        sum = sum + x; // Adding the digit to the sum
        n = n / 10;    // Moving to the next digit
    }
    cout << sum;
    return 0;
}
