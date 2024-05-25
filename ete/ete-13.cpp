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
bool helper(node*root,int sum,int csum){
    if(root==NULL) return false;
    csum+=root->data;
    if(root->left==NULL && root->right==NULL & sum==csum) return true;
    if(helper(root->left,sum,csum)) return true;
    if(helper(root->right,sum,csum)) return true;
    return false;
}
bool pathsum(node*root,int sum){
    return helper(root,sum,0);
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
    int sum;
    cin>>sum;
    if(pathsum) cout<<"true";
    else cout<<"false";
}
