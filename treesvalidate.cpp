#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val):data(val),left(NULL),right(NULL){}
};
node*append(node*root,int val){
    if(root==NULL)
    return new node(val);
    if(root->data>val) root->left=append(root->left,val);
    if(root->data<val) root->right=append(root->right,val);
    return root;
}
bool check(node*root,long min,long max){
    if(root==NULL) return true;
    if(root->data>=min && root->data<=max) return true;
    return false;
    return check(root->left,min,root->data) && check(root->right,root->data,max);
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
    cout<<check(root,LONG_MIN,LONG_MAX);
}