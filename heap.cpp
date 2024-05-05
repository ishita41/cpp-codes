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
            cout << "not possible" << endl;
            return;
        }
        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size) {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if (leftindex <= size && arr[i] < arr[leftindex]) {
                swap(arr[i], arr[leftindex]);
                i = leftindex;
            } else if (rightindex <= size && arr[i] < arr[rightindex]) {
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            } else return;
        }
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

    void heapsort() {
        int t = size;
        while (t > 1) {
            swap(arr[t], arr[1]);
            t--;
            heapify(arr, t, 1);
        }
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    //h.print();
    //h.deletenode();
    //h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 6;  // Corrected variable name
    for (int i = n / 2; i >= 1; i--) {
        h.heapify(arr, n, i);
    }

    cout << endl; 
    /*cout << "Sorted Array: ";
    h.heapsort();
    for (int i = 1; i <= h.size; i++) {
        cout << h.arr[i] << " ";
    }*/

    return 0;
}
