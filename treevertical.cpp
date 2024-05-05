#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* append(TreeNode* root, int val) {
    if (root == nullptr) return new TreeNode(val);
    if (root->val > val) root->left = append(root->left, val);
    if (root->val < val) root->right = append(root->right, val);
    return root;
}

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;

        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        map<int, map<int, multiset<int>>> mp;

        while (!q.empty()) {
            auto front = q.front();
            q.pop();
            TreeNode* node = front.first;
            auto coordinate = front.second;
            auto& row = coordinate.first;
            auto& col = coordinate.second;
            mp[col][row].insert(node->val);
            if (node->left) {
                q.push({node->left, {row + 1, col - 1}});
            }
            if (node->right) {
                q.push({node->right, {row + 1, col + 1}});
            }
        }

        for (auto i : mp) {
            auto& colmp = i.second;
            vector<int> verticalLine;
            for (auto colmpi : colmp) {
                auto& mset = colmpi.second;
                verticalLine.insert(verticalLine.end(), mset.begin(), mset.end());
            }
            ans.push_back(verticalLine);
        }
        return ans;
    }
};

int main() {
    TreeNode* root = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = append(root, data);
    }

    Solution sol;
    vector<vector<int>> result = sol.verticalTraversal(root);

    cout << "Vertical Traversal:\n";
    for (const auto& line : result) {
        for (int val : line) {
            cout << val << " ";
        }
        cout << "\n";
    }

    return 0;
}
