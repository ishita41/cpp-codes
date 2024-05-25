#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *child;

    Node(int x) : data(x), next(nullptr), child(nullptr) {}
};

class LinkedList {
public:
    Node* append(int data, Node* head) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        return head;
    }

    void printLinkedList(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    Node* merge(Node* list1, Node* list2){
        Node* dummyNode = new Node(-1);
        Node* res = dummyNode;

        while(list1 != NULL && list2 != NULL){
            if(list1->data < list2->data){
                res->child = list1;
                res = list1;
                list1 = list1->child;
            }
            else{
                res->child = list2;
                res = list2;
                list2 = list2->child;
            }
            res->next = NULL;
        }

        if(list1){
            res->child = list1;
        } else {
            res->child = list2;
        }

        if(dummyNode->child){
            dummyNode->child->next = NULL;
        }

        return dummyNode->child;
    }

    Node* flattenLinkedList(Node* head){
        if(head == NULL || head->next == NULL){
            return head;
        }

        Node* mergedHead = flattenLinkedList(head->next);
        head = merge(head, mergedHead);
        return head;
    }
};

int main() {
    Node* head = nullptr;
    LinkedList obj;

    int n, val;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = obj.append(data, head);
    }

    obj.printLinkedList(head);

    // Flatten the linked list
    Node* flattened = obj.flattenLinkedList(head);
    cout << "\nFlattened linked list: ";
    obj.printLinkedList(flattened);

    return 0;
}
