#include <iostream>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node(value);  // Create a new node
        if (root == nullptr) {
            root = newNode;  // Set as root for an empty tree
            return;
        }

        Node* current = root;
        while (current != nullptr) {
            if (value < current->data) {
                if (current->left == nullptr) {
                    current->left = newNode;
                    break;
                } else {
                    current = current->left;
                }
            } else {
                if (current->right == nullptr) {
                    current->right = newNode;
                    break;
                } else {
                    current = current->right;
                }
            }
        }
    }

    void levelOrder() {
        if (root == nullptr) {
            std::cout << "Tree is empty." << std::endl;
            return;
        }

        std::queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size(); 

           
            for (int i = 0; i < levelSize; i++) {
                Node* current = q.front();
                q.pop();

                std::cout << current->data << " ";

                
                if (current->left != nullptr) {
                    q.push(current->left);
                }
                if (current->right != nullptr) {
                    q.push(current->right);
                }
            }

            std::cout << std::endl;  }

    }
};

int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Level-order traversal:" << std::endl;
    tree.levelOrder();

    return 0;
}
