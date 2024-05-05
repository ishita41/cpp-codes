#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next = NULL;
    Node(int val) {
        data = val;
    }
};

class LinkedList {
public:
    Node* append(int info, Node* head) {
        Node* nn = new Node(info);
        if (head == NULL) {
            return nn;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
        return head;
    }

    void show(Node* head) {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    Node* insertbeg(int val, Node* head) {
        Node* nn = new Node(val);
        if (head == NULL)
            return nn;
        nn->next = head;
        return nn;
    }

    int length(Node* head) {
        int len = 0;
        Node* temp = head;
        while (temp) {
            temp = temp->next;
            len++;
        }
        return len;
    }
};

int main() {
    Node* head = NULL;
    LinkedList ob;
    
    int num;
    cout << "Enter the number of elements to append: ";
    cin >> num;
    cout << "Enter the elements to append:\n";
    for (int i = 0; i < num; ++i) {
        int data;
        cin >> data;
        head = ob.append(data, head);
    }
    
    cout << "Enter the element to insert at the beginning: ";
    int begData;
    cin >> begData;
    head = ob.insertbeg(begData, head);

    cout << "Linked List after appending and inserting: ";
    ob.show(head);
    cout << "\nLength of the linked list: " << ob.length(head);
    return 0;
}
