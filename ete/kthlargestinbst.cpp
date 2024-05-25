#include<iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int val) : data(val), left(NULL), right(NULL) {}
};

node* append(node* root, int val) {
    if (root == NULL) return new node(val);
    if (root->data > val) root->left = append(root->left, val);
    else if (root->data < val) root->right = append(root->right, val);
    return root;
}

// Helper function for reverse inorder traversal
void reverseInorder(node* root, int& k, int& result) {
    if (root == NULL || k <= 0) return;
    reverseInorder(root->right, k, result);
    k--;
    if (k == 0) {
        result = root->data;
        return;
    }
    reverseInorder(root->left, k, result);
}

// Function to find the k-th largest element
int kthLargest(node* root, int k) {
    int result = -1;
    reverseInorder(root, k, result);
    return result;
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
    int k;
    cin >> k;
    cout << kthLargest(root, k) << endl;

    // Clean up the tree (optional)
    // Add a function to delete the tree if needed.
    return 0;
}
