#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
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

void topview(node* root) {
    if (root == NULL) return;

    queue<pair<node*, int>> q;
    map<int, int> mp;

    q.push({root, 0});

    while (!q.empty()) {
        auto it = q.front(); q.pop();
        node* f = it.first;
        int hd = it.second;

        if (mp.find(hd) == mp.end()) {
            mp[hd] = f->data;
        }

        if (f->left) q.push({f->left, hd - 1});
        if (f->right) q.push({f->right, hd + 1});
    }

    for (auto it : mp) {
        cout << it.second << " ";
    }
    cout << endl;
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
    topview(root);

    return 0;
}
