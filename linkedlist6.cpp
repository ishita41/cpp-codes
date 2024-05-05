#include<iostream>
#include<vector>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val, node* nextNode = NULL){
        data = val;
        next = nextNode; // Initialize next pointer
    }
};

class linkedlist{
public:
    node* append(node* head, int val){
        node* nn = new node(val);
        if(head == NULL)
            return nn;
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nn;
        return head;
    }

    void show(node* head){
        node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    node* insertathead(node* head, int val){
        node* temp = new node(val);
        temp->next = head;
        return temp;
    }

    node* insertatend(node* head, int val){
        node* nn = new node(val);
        if(head == NULL)
            return nn;
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = nn;
        return head;
    }

    node* insertposition(node* head, int ele, int k){
        if(head == NULL){
            if(k == 1){
                return new node(ele);
            }
            else{
                return head;
            }
        }
        if(k == 1){
            return new node(ele, head);
        }
        int count = 1;
        node* temp = head;
        while(temp != NULL){
            if(count == (k - 1)){
                node* x = new node(ele);
                x->next = temp->next;
                temp->next = x;
                break;
            }
            temp = temp->next;
            count++;
        }
        return head;
    }
    
    node* insertbefore(node* head, int ele, int val){
        if(head == NULL){
            return NULL;
        }
        if(head->data == val){
            return new node(ele, head);
        }
        node* temp = head;
        while(temp->next != NULL){
            if(temp->next->data == val){
                node* x = new node(ele, temp->next);
                temp->next = x;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};

int main(){
    node* head = NULL;
    linkedlist obj;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        head = obj.append(head, data);
    }
    cout << "Enter the element to insert at the beginning: ";
    int k;
    cin >> k;
    head = obj.insertathead(head, k);
    cout << "Linked list after insertion at the beginning: ";
    obj.show(head);

    cout << "Enter the element to insert at the end: ";
    int e;
    cin >> e;
    head = obj.insertatend(head, e);
    cout << "Linked list after insertion at the end: ";
    obj.show(head);

    int ele, pos;
    cout << "Enter the element to insert: ";
    cin >> ele;
    cout << "Enter the position to insert: ";
    cin >> pos;
    head = obj.insertposition(head, ele, pos);
    cout << "Linked list after insertion at position " << pos << ": ";
    obj.show(head);

    int eleBefore, valBefore;
    cout << "Enter the element to insert before: ";
    cin >> eleBefore;
    cout << "Enter the value before which to insert: ";
    cin >> valBefore;
    head = obj.insertbefore(head, eleBefore, valBefore);
    cout << "Linked list after insertion of " << eleBefore << " before " << valBefore << ": ";
    obj.show(head);

    return 0;
}
