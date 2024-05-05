
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

vector<int>levelorder(node*root){
    vector<int>ans;
    if(root==NULL)
        return ans;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            node*temp=q.front();q.pop();
            ans.push_back(temp->data);
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
                
        }
    }
    return ans;
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

    vector<int> result = levelorder(root);

    cout << "Level Order Traversal: ";
    for(int i=0;i<result.size();i++){
        cout << result[i] << " ";
    }
    return 0;
}

