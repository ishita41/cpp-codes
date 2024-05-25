#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }

    node* append(node* head, int info) {
        node* nn = new node(info);
        if (head == NULL) return nn;
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
        return head;  // Return the head of the list
    }

    bool cycle(node* head) {
        node* slow = head;
        node* fast = head;
        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast) return true;  // Check if slow and fast pointers meet
        }
        return false;
    }
};

int main() {
    node* head = NULL;
    node ob(0);  // Initialize the object with a dummy value
    int n = 4;
    int values[] = {3, 2, 0, -4};

    for (int i = 0; i < n; i++) {
        head = ob.append(head, values[i]);
    }

    // Creating a cycle: last node (-4) points to the node at position 1 (node with value 2)
    node* temp = head;
    node* cycle_start = NULL;
    int pos = 1; // Position where the cycle starts (0-based index)

    int counter = 0;
    while (temp->next != NULL) {
        if (counter == pos) {
            cycle_start = temp;
        }
        temp = temp->next;
        counter++;
    }
    temp->next = cycle_start; // Creating the cycle

    if (ob.cycle(head))
        cout << "yes";
    else
        cout << "no";

    return 0;
}
