#include <iostream>
#include <vector>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;

    node(int val) : data(val), left(NULL), right(NULL) {}
};

node* append(node* root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    if (val < root->data) {
        root->left = append(root->left, val);
    } else {
        root->right = append(root->right, val);
    }
    return root;
}

void inorder(node* root, vector<int>& t) {
    if (root) {
        inorder(root->left, t);
        t.push_back(root->data);
        inorder(root->right, t);
    }
}

bool find(node* root, int k) {
    vector<int> sorted;
    inorder(root, sorted); // Store in-order traversal in a sorted vector

    int i = 0, j = sorted.size() - 1;
    while (i < j) {
        int sum = sorted[i] + sorted[j];
        if (sum == k) {
            return true; // Found a pair that sums to k
        } else if (sum < k) {
            i++;
        } else {
            j--;
        }
    }

    return false; // No pair found
}

int main() {
    int n;
    cin >> n;

    node* root = NULL; // Initialize an empty BST

    // Build the BST by calling append for each input data
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = append(root, data);
    }

 
    int k;
    cin >> k;

    bool found = find(root, k);
    if (found) {
        cout << "Pair found that sums to " << k << endl;
    } else {
        cout << "No pair found that sums to " << k << endl;
    }

}
