#include <iostream>
#include <vector>
#include <queue>

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    static TreeNode* buildTree(std::vector<int> arr) {
        if (arr.empty()) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(arr[0]);
        std::queue<TreeNode*> queue;
        queue.push(root);

        for (size_t i = 1; i < arr.size(); i += 2) {
            TreeNode* crr = queue.front();
            queue.pop();

            if (arr[i] != -1) {
                crr->left = new TreeNode(arr[i]);
                queue.push(crr->left);
            }

            if (i + 1 < arr.size() && arr[i + 1] != -1) {
                crr->right = new TreeNode(arr[i + 1]);
                queue.push(crr->right);
            }
        }

        return root;
    }
};

int main() {
    std::vector<int> arr = {1, 2, 3, -1, 4, 5, 6};
    TreeNode* root = BinaryTree::buildTree(arr);

    // Add any further processing or testing here

    return 0;
}
