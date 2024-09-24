#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val):data(val),left(NULL),right(NULL){}
};
node*append(node*root,int val){
    if(root==NULL) return new node(val);
    if(root->data>val) root->left=append(root->left,val);
    if(root->data<val) root->right=append(root->right,val);
    return root; 
}
int ceilval(node*root,int key){
    int ceil=-1;
    if(root->data==key) {
        ceil=root->data;
        return ceil;
    }
     if(root->data > key && (ceil == -1 || root->data < ceil)) {
            ceil = root->data;
        }
    if(root->data<key){
        root=root->right;
    }
    else{
        ceil=root->right->data;
        root=root->left;

    }
    return ceil;

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
    int key;
    cin>>key;
    cout<<ceilval(root,key);
}