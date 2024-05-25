#include<iostream>
using namespace std;

// Definition of the BST node
struct node {
    int data;
    node* left;
    node* right;
    node(int val) : data(val), left(NULL), right(NULL) {}
};

// Function to insert a node into the BST
node* append(node* root, int val) {
    if (root == NULL) return new node(val);
    if (root->data > val) root->left = append(root->left, val);
    else if (root->data < val) root->right = append(root->right, val);
    return root;
}

// Function to find the largest element in the BST
int largestElement(node* root) {
    if (root == NULL) {
        cout << "The tree is empty" << endl;
        return -1; // Assuming all BST values are non-negative
    }

    node* current = root;
    while (current->right != NULL) {
        current = current->right;
    }
    return current->data;
}

int main() {
    node* root = NULL;
    int n;

    // Read number of elements in the BST
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = append(root, data);
    }

    // Print the largest element in the BST
    cout << largestElement(root) << endl;

    // Clean up the tree (optional)
    // Add a function to delete the tree if needed.
    return 0;
}
