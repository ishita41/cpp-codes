#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    // Constructor
    node(int val) {
        data = val;
        next = NULL;
    }
};

class linkedlist {
public:
    node* append(int val, node* head) {
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
    }
    node* insertatbeg(node* head, int val) {
        if (head == NULL) return new node(val);
        node* nn = new node(val);
        nn->next = head;
        return nn;
    }
    node* insertatend(node* head, int val) {
        if (head == NULL) return new node(val);
        node* nn = new node(val);
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
        return head;
    }
    int length(node*head){
        int len=0;
        node*temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        return len;
    }
    bool search(node*head,int val){
        node*temp=head;
        while(temp!=NULL){
            if(temp->data==val) return true;
            temp=temp->next;
        }
        return false;
    }
    node*deletehead(node*head){
        if(head==NULL) return NULL;
        node*temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    node* deletetail(node* head) {
        if (head == NULL || head->next == NULL) return NULL;
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
    linkedlist obj;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        head = obj.append(data, head);
    }
    
    obj.show(head);
    //cout << "=====" << endl;
    //cout<<"enter for begin";
    //int b;
    //cin>>b;
    //head=obj.insertatbeg(head,b);
    //obj.show(head);
    //cout<<endl;
    //cout << "Enter the value to insert at the end: ";
    //cin >> val;
    //head = obj.insertatend(head, val);
    //obj.show(head);
    cout<<endl;
    //cout<<"length is"<<endl;
    //cout<<obj.length(head);
    cout<<endl;
    
   // int s;
    //cin>>s;
    //cout<<obj.search(head,s);
    head=obj.deletehead(head);
    obj.show(head);
    return 0;
}
