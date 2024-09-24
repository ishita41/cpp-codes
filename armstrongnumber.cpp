
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0, num = n;

    while (n != 0) {
        n /= 10;
        count++;
    }

    n = num;
    int sum = 0;

    while (n != 0) {
        int r = n % 10;
        sum += round(pow(r, count));
        n /= 10;
    }

    if (sum == num) 
        cout << "yes" << endl;
    else 
        cout << "no" << endl;

    return 0;
}
