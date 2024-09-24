#include<iostream>
#include<vector>
#include<stack>
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

void postorder(node* root) {
    stack<node*> s1, s2;
    if (root == NULL) return;
    s1.push(root);
    while (!s1.empty()) {
        node* curr = s1.top();
        s1.pop();
        s2.push(curr);
        if (curr->left) s1.push(curr->left);
        if (curr->right) s1.push(curr->right);
    }
    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
}

int main() {
    int n;
    cin >> n;
    node* root = NULL;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = append(root, data);
    }
    postorder(root);
    return 0;
}
