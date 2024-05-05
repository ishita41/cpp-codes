#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class heap {
public:
    int arr[100];
    int size = 0;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else return;
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletenode() {
        if (size == 0) {
            cout << "Heap is empty!" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        heapify(arr, size, 1);
    }

    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (left <= n && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right <= n && arr[largest] < arr[right]) {
            largest = right;
        }
        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
};

int main() {
    heap h;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        h.insert(data);
    }

    cout << "Heap after insertion: ";
    h.print();

    h.deletenode();
    cout << "Heap after deleting top element: ";
    h.print();

    return 0;
}
