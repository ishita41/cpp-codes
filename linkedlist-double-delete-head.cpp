#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int data1,node *next1,node *prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

node* ddl(int n,int a[]){
    node*head=new node(a[0]);
    node*prev=head;
    for(int i=1;i<n;i++){
        node*temp=new node(a[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(node*head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
}

node* delethead(node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node*temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
    return head;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    node*head=ddl(n,a);
    head=delethead(head);
    print(head);
    return 0;
}