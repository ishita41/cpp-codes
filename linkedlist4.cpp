#include<iostream>
#include<vector>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

class linkedlist {
public:
    node* append(node* head, int val) {
        node* nn = new node(val);
        if (head == NULL) {
            return nn;
        }
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
        return head;
    }

    void show(node* head) {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    node* deletell(node* head) {
        if (head == NULL || head->next == NULL) {
            //delete head;
            return NULL; // Updated head is NULL after deletion
        }
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    node* deletetail(node* head) {
        if (head == NULL || head->next == NULL)
            return NULL;
        if (head->next->next == NULL) {
            delete head->next;
            head->next = NULL;
            return head;
        }
        node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        return head;
    }
};

int main() {
    node* head = NULL;
    linkedlist ob;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = ob.append(head, data);
    }

    cout << "Linked List before deletion: ";
    ob.show(head);

    cout << "Deleting the last node..." << endl;
    head = ob.deletetail(head);

    cout << "Linked List after deletion: ";
    if (head == NULL) {
        cout << "Empty";
    } else {
        ob.show(head);
    }

    return 0;
}
