#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct node {
    int data;
    node* left = NULL;
    node* right = NULL;

    node(int val){
        data=val;
    }
};

node* append(node* root, int val) {
    if (root == NULL) return new node(val);
    if (root->data > val) root->left = append(root->left, val);
    if (root->data < val) root->right = append(root->right, val);
    return root;
}

node* merge(node* root1, node* root2) {
    if (root1 == NULL && root2 == NULL) return NULL;
    if (root1 == NULL) return root2;
    if (root2 == NULL) return root1;

    int val = root1->data + root2->data;
    node* ans = new node(val);
    ans->left = merge(root1->left, root2->left);
    ans->right = merge(root1->right, root2->right);
    return ans;
}

int main() {
    node* root1 = NULL;
    node* root2 = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root1 = append(root1, data);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {  // Use m instead of n for root2 input
        int data;
        cin >> data;
        root2 = append(root2, data);
    }

    node* mergedRoot = merge(root1, root2);

    return 0;
}
