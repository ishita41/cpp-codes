#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* dll(int a[], int n) {
    Node* head = new Node(a[0]);
    Node* prev = head;
    for (int i = 1; i < n; i++) {
        Node* temp = new Node(a[i], nullptr, prev);
        prev->next = temp;
       
        prev = temp;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Node* head = dll(a, n);
    print(head);
    return 0;
}