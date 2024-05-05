#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
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

void rightview(node* root) {
    if (root == NULL) return;
    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        int n = q.size();
        for (int i = 1; i <=n; i++) {
            node* temp = q.front();
            q.pop();
            
            if (i == n ) {
                cout << temp->data << " ";
            }

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
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
    rightview(root);
    return 0;
}
