#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Queue {
public:
    int* a;
    int start, end, cursize, maxsize;

    Queue(int maxsize = 100) {
        a = new int[maxsize];
        start = -1;
        end = -1;
        cursize = 0;
        this->maxsize = maxsize;
    }

    void push(int newele) {
        if (cursize == maxsize) {
            cout << "Queue is full. Cannot add " << newele << endl;
            return;
        }
        if (end == -1) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % maxsize;
        }
        a[end] = newele;
        cout << newele << " ";
        cursize++;
    }

    int pop() {
        if (start == -1) {
            cout << "Queue is empty." << endl;
            return -1; // or throw an exception
        }
        int popped = a[start];
        if (cursize == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % maxsize;
        }
        cursize--;
        return popped;
    }

    int top() {
        if (start == -1) {
            cout << "Queue is empty." << endl;
            return -1; // or throw an exception
        }
        return a[start];
    }

    int size() {
        return cursize;
    }
};

int main() {
    int n;
    cin >> n;
    Queue q(n);
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        q.push(ele);
    }
    cout << "Queue size: " << q.size() << endl;
    while (q.size() > 0) {
        cout << "Popped: " << q.pop() << endl;
    }
    return 0;
}