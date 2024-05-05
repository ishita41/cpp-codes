#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node {
    int data;
    struct Node *l, *r;
    Node(int val) {
        data = val;
        l = r = NULL;
    }
};

void printTree(vector<int> nodeArray) {
    int n = nodeArray.size();
    for (int i = 0; i < n; i++) {
        cout << nodeArray[i] << "->";
    }
    cout << endl;
}

void preInPostTraversal(struct Node* root) {
    if (root == NULL) {
        return;
    }
    stack<pair<Node*, string>> st;
    vector<int> preOrder, inOrder, postOrder;
    st.push({ root, "preOrder" });
    while (!st.empty()) {
        auto it = st.top();
        st.pop();

        if (it.second == "preOrder") {
            preOrder.push_back(it.first->data);
            it.second = "inOrder";
            st.push(it);

            if (it.first->l != NULL) {
                st.push({ it.first->l, "preOrder" });
            }
        }
        else if (it.second == "inOrder") {
            inOrder.push_back(it.first->data);
            it.second = "postOrder";
            st.push(it);
            if (it.first->r != NULL) {
                st.push({ it.first->r, "preOrder" });
            }
        }
        else {
            postOrder.push_back(it.first->data);
        }
    }
    printTree(preOrder);
    printTree(inOrder);
    printTree(postOrder);
}

int main()
{
    struct Node* root = new Node(1);
    root->l = new Node(2);
    root->r = new Node(3);
    root->l->l = new Node(4);
    root->l->r = new Node(5);
    root->l->r->l = new Node(6);
    root->r->l = new Node(7);
    root->r->r = new Node(8);
    root->r->r->l = new Node(9);
    root->r->r->r = new Node(10);
    preInPostTraversal(root);
    cout << endl;
    return 0;
}
