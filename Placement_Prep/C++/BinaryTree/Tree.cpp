#include <bits/stdc++.h>
using namespace std;

class TreeNode{
	public :
	int data;
	TreeNode *right;
	TreeNode *left;

	TreeNode(int data){
		this->data = data;
		left = NULL;
		right = NULL;
	}
};


void print(TreeNode *root){

	if(root==NULL){
		return;
	}
	cout<<root->data;
	print(root->left);
	print(root->right);

}

int main(){
	TreeNode *n1 = new TreeNode(1);
	TreeNode *n2 = new TreeNode(2);
	TreeNode *n3 = new TreeNode(3);
	TreeNode *n4 = new TreeNode(4);
	TreeNode *n5 = new TreeNode(5);
	TreeNode *n6 = new TreeNode(6);
	TreeNode *n7 = new TreeNode(7);
	n1->left = n2;n1->right = n3;
	n2->left = n4;n2->right = n5;
       	//n1->left->left = n4; 
  	//n1->left->right = n5;
	//n1->right->left = n6;
	//n1->right->left->right = n7;	
	print(n1);
}
