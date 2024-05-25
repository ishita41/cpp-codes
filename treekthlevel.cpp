#include <iostream>
#include <queue>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int val) : data(val), left(nullptr), right(nullptr) {}
};

node* append(node* root, int val) {
    if (root == nullptr) return new node(val);
    if (root->data < val) root->left = append(root->left, val);
    else if (root->data >= val) root->right = append(root->right, val);
    return root;
}

void kthlevel(node* root, int k) {
    if (root == nullptr) return;
    queue<node*> q;
    q.push(root);
    int level = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            node* temp = q.front();
            q.pop();
            if (level == k) {
                cout << temp->data << " ";
            }
            if (temp->left != nullptr) q.push(temp->left);
            if (temp->right != nullptr) q.push(temp->right);
        }
        level++;
    }
}

int main() {
    node* root = nullptr;
    int n, val, k;
    cout << "Enter the number of elements in the BST: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = append(root, val);
    }
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Nodes at level " << k << ": ";
    kthlevel(root, k);
    cout << endl;
    return 0;
}
