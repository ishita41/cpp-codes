#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
    node(int val){
        data=val;
    }
};
node*append(node*root,int val){
    if(root==NULL) return new node(val);
    if(root->data>val) root->left=append(root->left,val);
    if(root->data<val) root->right=append(root->right,val);
    return root;
}
void preorder(node*root){
    if(root!=NULL) {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

}
int main(){
    node*root=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        root=append(root,data);
    }
preorder(root);
}

