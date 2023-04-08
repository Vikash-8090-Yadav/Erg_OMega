#include <bits/stdc++.h>
using namespace std;

/*
 *       1
 *     /   \
 *    2     4
 *    \    / \
 *     3  5   6
 
 */

class node{
	public:
		int data;
		node* left;
		node *right;
		node(int data){
			this->data=data;
			left=NULL;
			right=NULL;
		}
};

int depth(node *root){
	if(root==NULL){
		return 0;
	}

	int lh = depth(root->left);
	int rh = depth(root->right);

	int ans = 1+max(lh,rh);

	return ans;
}


int main(){

	node *root = new node(1);
	node * n2 = new node(2);
	node *n3 = new node(3);
	node *n4 = new node(4);
	node *n5 = new node(5);
	node *n6 = new node(6);

	root->left = n2;
	root->right = n4;
	n4->left = n5;
	n4->right = n6;
	n2->right = n3;

	int ans = depth(root);

	cout<<ans<<endl;
}
