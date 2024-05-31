#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct node{
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
vector<int>ans;
void inorder(node*root){
    if(root!=NULL){
        inorder(root->left);
        ans.push_back(root->data);
        inorder(root->right);
    }
}
void adding(node*root1,node*root2){
    inorder(root1);
    inorder(root2);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    node*root1=NULL;
    node*root2=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        root1=append(root1,data);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int data;
        cin>>data;
        root2=append(root2,data);
    }
    adding(root1,root2);
}