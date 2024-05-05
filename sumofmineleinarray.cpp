#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mini = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] < mini) {
            mini = a[i];
        }
    }

    int sum = 0;
    while(mini != 0) {
        int r = mini % 10;
        sum += r;
        mini /= 10; // Change n to mini here
    }
    cout << sum;
    return 0;
}
