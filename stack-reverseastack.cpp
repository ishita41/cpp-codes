#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int>& st) {
    stack<int> temp;

    // Move all elements from the original stack to the temporary stack
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }

    // Move elements back from the temporary stack to the original stack, reversing the order
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

void printStack(stack<int> st) {
    // Print the stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    int n, value;
    cout << "Enter the number of elements in the stack: ";
    cin >> n;
    cout << "Enter the elements of the stack: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        st.push(value);
    }
    cout << "Original stack: ";
    printStack(st);
    // Reverse the stack
    reverseStack(st);
    cout << "Reversed stack: ";
    printStack(st);

    return 0;
}
