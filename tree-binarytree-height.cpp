#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val):data(val),left(NULL),right(NULL){}
};
node*buildtree(vector<int>a){
    if(a.empty())
    return NULL;
    node*root=new node(a[0]);
    queue<node*>q;
    q.push(root);
    for(int i=0;i<a.size();i+=2){
        node*temp=q.front();q.pop();

        if(a[i]!=-1){
            temp->left=new node(a[i]);
            q.push(temp->left);
        }
        if(a[i+1]!=-1 && i+1<a.size()){
            temp->right=new node(a[i+1]);
            q.push(temp->right);
        }
    }
    return root;
}
int height(node*root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    node*root=buildtree(a);
    cout<<height(root);
}