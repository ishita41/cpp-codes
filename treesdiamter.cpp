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

int height(node* root) {
    if (root == NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

int diameter(node* root) {
    if (root == NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    int d = lh + rh+1;
    return max(d, max(diameter(root->left), diameter(root->right)));
}

int main() {
    node* root = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = append(root, data);
    }
    int treeDiameter = diameter(root);
    cout << treeDiameter << endl;

    return 0;
}
