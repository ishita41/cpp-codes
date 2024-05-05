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

int check(node* root) {
    if (root == NULL) return 0;
    int lh = check(root->left);
    int rh = check(root->right);
    if (lh == -1 || rh == -1 || abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
}

bool isbalance(node* root) {
    return check(root) != -1;
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

    if (isbalance(root)) cout << "yes";
    else cout << "no";
    return 0;
}
