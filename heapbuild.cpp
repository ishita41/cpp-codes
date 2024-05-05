#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class heap {
public:
    int size;
    int a[100];
    heap() {
        a[0] = -1;
        size = 0;
    }
    void insert(int val) {
        size = size + 1; // Corrected increment of size
        int idx = size;
        a[idx] = val;
        while (idx > 1) {
            int parent = idx / 2;
            if (a[idx] > a[parent]) {
                swap(a[idx], a[parent]);
                idx = parent;
            } else {
                break; // Exit loop when heap property is satisfied
            }
        }
    }
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    heap h;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        h.insert(data);
    }
    h.print();
    return 0;
}
