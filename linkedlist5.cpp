#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
    }
};
class linkedlist{
    public:
    node*append(node*head,int val){
        node*nn= new node(val);
        if(head==NULL) return nn;
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nn;
        return head;
    }
    void show(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    node*deletek(node*head,int k){
        if(head==NULL) return head;
        if(k==1){
            node*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int count=0;
        node*temp=head;
        node*prev=NULL;
        while(temp!=NULL){
            count++;
            if(count==k){
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
    node*deleteele(node*head,int ele){
        if(head==NULL) return head;
        if(head->data==ele){
            node*temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        //int count=0;
        node*temp=head;
        node*prev=NULL;
        while(temp!=NULL){
            //count++;
            if(temp->data==ele){
                prev->next=prev->next->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
    
};
int main(){
    node*head=NULL;
    linkedlist obj;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        head=obj.append(head,data);
    }
    int k;
    cin>>k;
    head=obj.deleteele(head,k);
    obj.show(head);
}