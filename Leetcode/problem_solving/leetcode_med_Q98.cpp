#include <bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;
	node(int data){
		this->left = NULL;
		this->right = NULL;
		this->data = data;
	}
};

bool track = false;
bool isValidBST(node* root){
	if(root==NULL){
		return NULL;
	}
	int rl =0,rr =0;
	if(root->left!=NULL){
		rl = (root->left)->data;

		if(root->data>rl){
			track = true;
			isValidBST(root->left);
		}
	}
	if(root->right!=NULL){
		rr = (root->right)->data;
		if(root->data<rr){
			track = true;
			isValidBST(root->right);
		}
	}
	else{
		track = false;
	}
	if(track){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	node * root = new node(3);
	node * n1 = new node(1);
	node * n4 = new node(4);
	node * n2 = new node();
	root->left = n4;
	root->right = n1;
	root->left->right = n2;
	cout<<isValidBST(root);
}