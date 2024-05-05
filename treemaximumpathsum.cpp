#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

struct node{
    int data;
    node* left = nullptr;
    node* right = nullptr;
    node(int val){
        data = val;
    }
};

node* append(node* root, int val){
    if(root == nullptr) return new node(val);
    if(root->data > val) root->left = append(root->left, val);
    if(root->data < val) root->right = append(root->right, val);
    return root;
}

int maxpathsum(node* root, int& maxi){
    if(root == nullptr) return 0;
    int left = max(0, maxpathsum(root->left, maxi));
    int right = max(0, maxpathsum(root->right, maxi));
    maxi = max(maxi, left + right + root->data);
    return max(left, right) + root->data;
}

int maxpath(node* root){
    int maxi = INT_MIN;
    maxpathsum(root, maxi);
    return maxi;
}

int main(){
    node* root = nullptr;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int data;
        cin >> data;
        root = append(root, data);
    }
    cout << maxpath(root);
}
