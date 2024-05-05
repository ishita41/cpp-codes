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

node* search(node* root, int val) {
    if (root == nullptr || root->data == val) return root;
    if (root->data > val) return search(root->left, val);
    return search(root->right, val);
}

node* lca(node* root, node* p, node* q) {
    if (root == nullptr || p == nullptr || q == nullptr) return nullptr;

    if (root->data > p->data && root->data > q->data)
        return lca(root->left, p, q);
    if (root->data < p->data && root->data < q->data)
        return lca(root->right, p, q);

    return root;
}

int main() {
    node* root = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = append(root, data);
    }

    int pdata, qdata;
    cin >> pdata >> qdata;

    node* p = search(root, pdata);
    node* q = search(root, qdata);

    node* ans = lca(root, p, q);

    if (ans != nullptr) {
        cout << "Lowest Common Ancestor: " << ans->data << endl;
    } else {
        cout << "Nodes not found in the tree!" << endl;
    }

    return 0;
}
