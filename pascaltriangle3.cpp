#include<iostream>
#include<vector>
using namespace std;

int ncr(int n, int r) {
    int res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void sol(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << ncr(i, j) << " ";
        }
        cout << endl; // Move to the next line after printing a row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;
    sol(n);
    return 0;
}
