#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Heap {
public:
    int a[100];
    int size;

    Heap() {
        size = 0;
    }

    void heapify(int a[], int n, int i) {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && a[left] < a[smallest]) {
            smallest = left;
        }
        
        if (right < n && a[right] < a[smallest]) {
            smallest = right;
        }

        if (smallest != i) {
            swap(a[smallest], a[i]);
            heapify(a, n, smallest);
        }
    }

    void buildHeap(int a[], int n) {
        size = n;
        for (int i = (n / 2) - 1; i >= 0; i--) {
            heapify(a, n, i);
        }
    }

    void printHeap(int a[]) {
        for (int i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Heap h;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    h.buildHeap(a, n);

    cout << "Heapified array (min heap): ";
    h.printHeap(a);

    return 0;
}
