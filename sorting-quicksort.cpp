#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int partition(int a[], int low, int high) {
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i < j) {
        while (a[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (a[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(a[i], a[j]);
    }
    swap(a[low], a[j]);
    return j;
}

void qs(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        qs(a, low, pi - 1);
        qs(a, pi + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    qs(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
