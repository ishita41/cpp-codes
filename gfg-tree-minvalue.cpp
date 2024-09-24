#include<iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int x):data(x),left(NULL),right(NULL){}
};

node* append(node* root, int val){
    if(root == NULL) return new node(val);
    if(root->data > val) root->left = append(root->left, val);
    if(root->data < val) root->right = append(root->right, val);
    return root;
}

node* findmin(node* root){
    if(root->left == NULL) return root;
    else findmin(root->left);
}

int main(){
    node* root = NULL;
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        root = append(root, data);
    }
    node* minNode = findmin(root);
    cout << minNode->data << endl; // print the minimum value
    return 0;
}