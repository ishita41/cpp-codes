#include<iostream>
#include<vector>

using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
	data = val;
	left = right = nullptr;
}
};
Node* append(Node* root , int data){
	if(root==NULL) return new Node(data);
	if(root->data > data){
		root->left = append(root->left , data);
	}
	else if(root->data < data){
		root->right = append(root->right , data);
	}
	return root;
}

Node* LCA(Node* root,int p,int q){
	while(root !=NULL){
		if(p<root->data && q< root->data){
			root = root->left;
		}else if(p>root->data && q> root->data){
			root = root->right;
		}else return root;
	}
	return NULL;
}
int main(){
	int n;
	cin>>n;
	Node* root = NULL;
	
	for(int i=0;i<n;i++){
		int data;
		cin>>data;
		root = append(root,data);
	}
	int p,q;cin>>p>>q;
	
	Node* lca = LCA(root , p , q);
	if(lca) cout<<lca->data<<endl;
	else cout<<"NO LCA";
	return 0;
}