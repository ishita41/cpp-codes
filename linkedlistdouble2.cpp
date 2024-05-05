#include <iostream>
#include <vector>
using namespace std;

class node {
public:
    int data;
    node* next = nullptr;
    node* prev = nullptr;

    node(int val) {
        data = val;
    }
};

class linkedlist{
public:  // Change access specifier to public
    node* append(node* head, int data) {
        node* newNode = new node(data);
        if (head == nullptr) {
            return newNode;
        }
        node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        return head;
    }

    void show(node* head) {
        node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    node* deleteHead(node* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        node* prev = head;
        head = head->next;
        head->prev = nullptr;
        delete prev;
        return head;
    }
};

int main() {
    node* head = nullptr;
    linkedlist obj;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = obj.append(head, data);
    }
    head = obj.deleteHead(head);
    obj.show(head);
    return 0;
}

