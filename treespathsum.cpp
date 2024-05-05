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
bool helper(node*root,int sum,int targetsum){
    if(root==NULL) return false;
    sum+=root->data;
    if(root->left==NULL && root->right==NULL && targetsum==sum) return true;
    if(helper(root->left,sum,targetsum)) return true;
    if(helper(root->right,sum,targetsum)) return true;
    return false;
}
bool pathsum(node*root,int target){
    return helper(root,0,target);
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
    int target;
    cin>>target;
    if(pathsum(root,target)) cout<<"exists";
    else cout<<"no";
}
