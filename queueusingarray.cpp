
#include <iostream>
using namespace std;

class Queue {
    int * arr;
    int start, end, currSize, maxSize;
public:
    Queue() {
        arr = new int[100];
        start = -1;
        end = -1;
        currSize = 0;
    }
    Queue(int maxSize) {
        this->maxSize = maxSize;
        arr = new int[maxSize];
        start = -1;
        end = -1;
        currSize = 0;
    }
    void push(int newElement) {
        if (currSize == maxSize) {
            cout << "Queue is full\nExiting..." << endl;
            //exit(1);
        }
        if (end == -1) {
            start = 0;
            end = 0;
        } else
            end = (end + 1) % maxSize;
        arr[end] = newElement;
        cout << "The element pushed is " << newElement << endl;
        currSize++;
    }
    int pop() {
        if (start == -1) {
            cout << "Queue Empty\nExiting..." << endl;
        }
        int popped = arr[start];
        if (currSize == 1) {
            start = -1;
            end = -1;
        } else
            start = (start + 1) % maxSize;
        currSize--;
        return popped;
    }
    int top() {
        if (start == -1) {
            cout << "Queue is Empty" << endl;
            exit(1);
        }
        return arr[start];
    }
    int size() {
        return currSize;
    }
};

int main() {
    int n, element;
    cout << "Enter the size of the queue: ";
    cin >> n;

    Queue q(n);

    cout << "Enter elements to push into the queue: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> element;
        q.push(element);
    }

    cout << "The peek of the queue before deleting any element: " << q.top() << endl;
    cout << "The size of the queue before deletion: " << q.size() << endl;

    cout << "The first element to be deleted: " << q.pop() << endl;
    cout << "The peek of the queue after deleting an element: " << q.top() << endl;
    cout << "The size of the queue after deleting an element: " << q.size() << endl;

    return 0;
}

