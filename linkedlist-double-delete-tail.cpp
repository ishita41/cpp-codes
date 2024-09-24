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
        next=NULL;
        prev=NULL;
    }
};
node*linkedlist(int a[],int n){
    node*head=new node(a[0]);
    node*prev=head;
    for(int i=0;i<n;i++){
        node*temp=new node(a[i]);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node*deletetail(node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    node*newtail=tail->prev;
    newtail->next=NULL;
    newtail->prev=NULL;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}