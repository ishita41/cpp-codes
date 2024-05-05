#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node*left=NULL;
    node*right=NULL;
    node(int val){
        data=val;
    }
};
node*append(node* root,int val){
    if(root==NULL) return new node(val);
    if(root->data>val) root->left=append(root->left,val);
    if(root->data<val) root->right=append(root->right,val);
    return root;
}
int diameter(node*root){
    int maxi=0;
    if(root==NULL) return 0;
    int lh=diameter(root->left);
    int rh=diameter(root->right);
    maxi=max(maxi,lh+rh);
    return 1+max(lh,rh);
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
    cout<<diameter(root);
}
