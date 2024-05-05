#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int val) : data(val), left(nullptr), right(nullptr) {}
};

node* append(node* root, int val) {
    if (root == nullptr) return new node(val);
    if (root->data > val) root->left = append(root->left, val);
    if (root->data < val) root->right = append(root->right, val);
    return root;
}
bool sametree(node*root1,node*root2){
    if(root1==NULL && root2==NULL) return true;
    if(root1==NULL) return false;
    if(root2==NULL) return false;
    if(root1->data !=root2->data ) return false;
    return sametree(root1->left,root2->left) && sametree(root1->right,root2->right);

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
   if(sametree(root1,root2)) cout<<"yes";
   else cout<<"nooooo";
}