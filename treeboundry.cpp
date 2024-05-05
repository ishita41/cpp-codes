#include <iostream>
#include <vector>
#include <algorithm>
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
    if (root->data < val) root->right = append(root->right, val);
    return root;
}

bool leaf(node* root) {
    return !root->left && !root->right;
}

void addLeft(node* root, vector<int>& ans) {
    if (!root) return;
    node* temp = root->left;
    while (temp) {
        if (!leaf(temp)) {
            ans.push_back(temp->data);
        }
        if (temp->left) {
            temp = temp->left;
        }
        else {
            temp = temp->right;
        }
    }
}

void addRight(node* root, vector<int>& ans) {
    if (!root) return;
    node* temp = root->right;
    vector<int> top;
    while (temp) {
        if (!leaf(temp)) {
            top.push_back(temp->data);
        }
        if (temp->right) {
            temp = temp->right;
        }
        else {
            temp = temp->left;
        }
    }
    for (int i = top.size() - 1; i >= 0; i--) {
        ans.push_back(top[i]);
    }
}

void addLeaves(node* root, vector<int>& ans) {
    if (!root) return;
    if (leaf(root)) {
        ans.push_back(root->data);
        return;
    }
    addLeaves(root->left, ans);
    addLeaves(root->right, ans);
}

vector<int> boundary(node* root) {
    vector<int> ans;
    if (!root) {
        return ans;
    }
    if (!leaf(root)) {
        ans.push_back(root->data);
    }
    addLeft(root, ans);
    addLeaves(root, ans);
    addRight(root, ans);

    return ans;
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
    vector<int> res = boundary(root);  // Corrected function call
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
}