#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class heap {
public:
    int a[101]; // Increase array size by 1 for 1-based indexing
    int size;
    heap() {
        size = 0;
    }
    void heapify(int a[], int n, int i) {
        int largest = i;
        int leftchild = 2 * i;
        int rightchild = 2 * i + 1;
        if (leftchild <= n && a[leftchild] > a[largest]) { // <= for boundary check
            largest = leftchild;
        }
        if (rightchild <= n && a[rightchild] > a[largest]) { // <= for boundary check
            largest = rightchild;
        }
        if (i != largest) {
            swap(a[largest], a[i]);
            heapify(a, n, largest);
        }
    }
    void build(int a[], int n) {
        size = n;
        for (int i = n / 2; i >= 1; i--) { // Start from n/2 for 1-based indexing
            heapify(a, n, i);
        }
    }
    void print(int a[]) {
        for (int i = 1; i <= size; i++) { // Change loop condition for 1-based indexing
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    int n;
    cin >> n;
    int a[n + 1]; // Increase array size by 1 for 1-based indexing
    for (int i = 1; i <= n; i++) { // Start loop from 1 for 1-based indexing
        cin >> a[i];
    }
    h.build(a, n);
    h.print(a);
    return 0;
}
