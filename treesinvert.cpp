
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;

struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
    node(int val):data(val),left(NULL),right(NULL){}
};

node*append(node*root,int val){
    if(root==NULL)
        return new node(val);
    if(root->data<val)
        root->left=append(root->left,val);
    if(root->data>val)
        root->right=append(root->right,val);
    return root;
}

node*invert(node*root){
    if(root==NULL) return NULL;
    swap(root->left,root->right);
    invert(root->left);
    invert(root->right);
    return root;
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
    invert(root);
    
}

