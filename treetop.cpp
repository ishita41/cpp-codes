#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int val) : data(val), left(NULL), right(NULL) {}
};

void insert(node*& root, int val) {
    if (root == NULL) {
        root = new node(val);
        return;
    }

    if (val < root->data) {
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}

void topview(node* root) {
    if (root == NULL) return;

    map<int, int> mp;
    queue<pair<node*, int>> q;
    q.push({root, 0});

    while (!q.empty()) {
        auto it = q.front();
        q.pop();
        node* f = it.first;
        int s = it.second;

        if (mp.find(s) == mp.end()) {
            mp[s] = f->data;
        }

        if (f->left) q.push({f->left, s - 1});
        if (f->right) q.push({f->right, s + 1});
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
        insert(root, data);
    }
    topview(root);

    return 0;
}
