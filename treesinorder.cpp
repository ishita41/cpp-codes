#include <iostream>
using namespace std;

// Node structure for the binary search tree
struct Node {
    int data;
    Node* left=NULL;
    Node* right=NULL    ;

    Node(int val) {
        data = val;
        
    }
};

// Function to insert a node into the binary search tree
Node* insertNode(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insertNode(root->left, val);
    } else {
        root->right = insertNode(root->right, val);
    }

    return root;
}

// Function to print the binary search tree (inorder traversal)
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the nodes: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = insertNode(root, val);
    }

    cout << "Inorder traversal of the BST: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}
