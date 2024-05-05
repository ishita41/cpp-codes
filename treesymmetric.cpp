#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val): data(val),left(NULL),right(NULL){}
};
node*append(node*root,int val){
    if(root==NULL) return new node(val);
    if(root->data>val) root->left=append(root->left,val);
    if(root->data<val) root->right=append(root->right,val);
    return root;
}
bool check(node*root1,node*root2){
    if(root1==NULL && root2==NULL) return true;
    if(root1==NULL || root2==NULL) return false;
    return check(root1->left,root2->right) && check(root1->right,root2->left);
}
bool symmetric(node*root){
    if(root==NULL) return false;
    return check(root->left,root->right);
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
    if(symmetric(root)) cout<<"YES";
    else cout<<"NO";
}

