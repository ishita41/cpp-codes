#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int data;
    node* next = nullptr;
    node* back = nullptr;

    node(int data1, node* next1, node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }

    node(int val) {
        data = val;
        next = nullptr;
        back = nullptr;
    }

    void print() {
        node* current = this;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

node* convertarraytodoublylinkedlist(const vector<int>& a) {
    if (a.empty())
        return nullptr;

    node* head = new node(a[0]);
    node* prev = head;

    for (int i = 1; i < a.size(); i++) {
        node* temp = new node(a[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

int main() {
    vector<int> a;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    node* head = convertarraytodoublylinkedlist(a);
    if (head != nullptr)
        head->print();
    else
        cout << "Empty list" << endl;

    return 0;
}
